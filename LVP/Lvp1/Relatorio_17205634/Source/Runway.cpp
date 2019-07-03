/*
 * Runway.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: Freitas
 */

#include "Runway.hpp"

Runway::Runway(unsigned int limit)
{
    // Inicializar as variaveis como zero
    queue_limit = limit;
    num_land_requests = num_takeoff_requests = 0;
    num_landings = num_takeoffs = 0;
    num_land_refused = num_takeoff_refused = 0;
    num_land_accepted = num_takeoff_accepted = 0;
    land_wait = takeoff_wait = idle_time = 0;
}

Error_code Runway::can_land(Plane& current)
{
    Error_code result;
    if(Landing.size() < queue_limit)
    {
        result = Landing.append(current);
    }
    else
    {
        result = fail;
    }
    num_land_requests++;
    if(result != success)
    {
        num_land_refused++;
    }
    else
    {
        num_land_accepted++;
    }
    return result;
}

Error_code Runway::can_depart(Plane& current)
{
    Error_code result;
    if(Takeoff.size() < queue_limit)
    {
        result = Takeoff.append(current);
    }
    else
    {
        result = fail;
    }
    num_takeoff_requests++;
    if(result != success)
    {
        num_takeoff_refused++;
    }
    else
    {
        num_takeoff_accepted++;
    }
    return result;
}

Runway_activity Runway::activity(int time, Plane& moving)
{
    Runway_activity in_progress;
    if(!Landing.empty())
    {
        Landing.retrieve(moving);
        land_wait += time - moving.started();
        num_landings++;
        in_progress = land;
        Landing.serve();
    }
    else if(!Takeoff.empty())
    {
        Takeoff.retrieve(moving);
        takeoff_wait += time - moving.started();
        num_takeoffs++;
        in_progress = takeoff;
        Takeoff.serve();
    }
    else
    {
        idle_time++;
        in_progress = idle;
    }
    return in_progress;
}

void Runway::shut_down(int time)
{
    cout << "Simulation has concluded after " << time << " time units." << endl
         << "Total number of planes processed "
         << (num_land_requests + num_takeoff_requests) << endl;
    if(num_land_requests > 0)
    {
        cout << "Total number of planes asking to land "
             << num_land_requests << endl;
    }
    if(num_takeoff_requests > 0)
    {
        cout << "Total number of planes asking to take off "
             << num_takeoff_requests << endl;
    }
    if(num_land_accepted > 0)
    {
        cout << "Total number of planes accepted for landing "
             << num_land_accepted << endl;
    }
    if(num_takeoff_accepted > 0)
    {
        cout << "Total number of planes accepted for takeoff "
             << num_takeoff_accepted << endl;
    }
    if(num_land_refused > 0)
    {
        cout << "Total number of planes refused for landing "
             << num_land_refused << endl;
    }
    if(num_takeoff_refused > 0)
    {
        cout << "Total number of planes refused for takeoff "
             << num_takeoff_refused << endl;
    }
    if(num_landings > 0)
    {
        cout << "Total number of planes that landed "
             << num_landings << endl;
    }
    if(num_takeoffs > 0)
    {
        cout << "Total number of planes that took off "
             << num_takeoffs << endl;
    }
    if(Landing.size() > 0)
    {
        cout << "Total number of planes left in landing queue "
             << Landing.size() << endl;
    }
    if(Takeoff.size() > 0)
    {
        cout << "Total number of planes left in takeoff queue "
             << Takeoff.size() << endl;
    }
    cout << "Percentage of time runway idle "
         << 100.0 * (float (idle_time))/(float (time)) << "%" << endl;
    if(num_landings > 0)
    {
        cout << "Average wait in landing queue "
             << (float (land_wait))/(float (num_landings)) << " time units" << endl;
    }
    if(num_takeoffs > 0)
    {
        cout <<  "Average wait in takeoff queue "
             << (float (takeoff_wait))/(float (num_takeoffs))
             << " time units" << endl;
    }
    if(num_land_requests > 0)
    {
        cout << "Average observed rate of planes wanting to land "
             << (float (num_land_requests))/(float (time))
             << " per time unit" << endl;
    }
    if(num_takeoff_requests > 0)
    {
        cout << "Average observed rate of planes wanting to take off "
             << (float (num_takeoff_requests))/(float (time))
             << " per time unit" << endl;
    }
}
