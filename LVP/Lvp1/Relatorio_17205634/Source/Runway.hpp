/*
 * Runway.hpp
 *
 *  Created on: Aug 19, 2018
 *      Author: Freitas
 */

#ifndef RUNWAY_HPP_
#define RUNWAY_HPP_



#include "Plane.hpp"
#include "Extended_queue.hpp"
#include "Random.hpp"
enum Runway_activity {idle, land, takeoff}; // Indicates what's happening in runway

class Runway
{
// Methods
public:

    Runway(unsigned int limit);
    /*  Post: The Runway data members are initialized to record no prior Runway use
            and to record the limit on queue sizes. */

    Error_code can_land(Plane& current);
    /*  Post: If possible, the Plane current is added to the landing Queue; otherwise,
            an Error_code of overflow is returned. The Runway statistics are updated.
        Uses: class Extended_queue. */

    Error_code can_depart(Plane& current);
    /*  Post: If possible, the Plane current is added to the takeoff Queue; otherwise, an
            Error_code of overflow is returned. The Runway statistics are updated.
        Uses: class Extended_queue. */

    Runway_activity activity(int time , Plane& moving);
    /*  Post: If the landing Queue has entries, its front Plane is copied to the parameter
            moving and a result land is returned. Otherwise, if the takeoff Queue has
            entries, its front Plane is copied to the parameter moving and a result
            takeoff is returned. Otherwise, idle is returned. Runway statistics are
            updated.
        Uses: class Extended_queue. */

    void shut_down(int time);
    /*  Post: Runway usage statistics are summarized and printed. */

// Attributes
private:

    Extended_queue Landing;     // Queue of planes waiting to land
    Extended_queue Takeoff;     // Queue of planes waiting to takeoff
    unsigned int queue_limit;   // Queues's maximum size
    int num_land_requests;      // Accumulator of landing requests
    int num_takeoff_requests;   // Accumulator of takeoff requests
    int num_landings;           // Accumulator of landings accomplished
    int num_takeoffs;           // Accumulator of takeoffs accomplished
    int num_land_accepted;      // Accumulator of accepted landings
    int num_takeoff_accepted;   // Accumulator of accepted takeoffs
    int num_land_refused;       // Accumulator of rejected landings
    int num_takeoff_refused;    // Accumulator of rejected takeoffs
    int land_wait;              // Total time wait for landings
    int takeoff_wait;           // Total time wait for takeoffs
    int idle_time;              // Runway's idle total time
};



#endif /* RUNWAY_HPP_ */
