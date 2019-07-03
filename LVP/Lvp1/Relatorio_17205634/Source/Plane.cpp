/*
 * Plane.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: Freitas
 */


#include "Plane.hpp"
Plane::Plane(void)
{
    flt_num = -1;
    clock_start = -1;
    state = null;
}

Plane::Plane(int flt, int time, Plane_status status)
{
    flt_num = flt;
    clock_start = time;
    state = status;
    cout << "Plane number "<< flt << " ready to ";
    if(status == arriving)
    {
        cout << "land."<< endl;
    }
    else
    {
        cout << "take off."<< endl;
    }
}

Plane::~Plane(void)
{

}

void Plane::refuse(void)
{
    cout << "Plane number "<< flt_num;
    if(state == arriving)
    {
        cout << " directed to another airport."<< endl;
    }
    else
    {
        cout << " told to try to takeoff again later."<< endl;
    }
}

void Plane::land(int time)
{
    int wait = time - clock_start;
    cout << time << ": Plane number "<< flt_num << " landed after "
         << wait << " time unit"<< ((wait <= 1) ? " ": "s ")
         << "in the takeoff queue. "<< endl;
}

void Plane::fly(int time)
{
    int wait = time - clock_start;
    cout << time << ": Plane number "<< flt_num << " took off after "
         << wait << " time unit"<< ((wait <= 1) ? " ": "s ")
         << "in the takeoff queue. "<< endl;
}

int Plane::started(void)
{
    return clock_start;
}

void Plane::setFltNum(int flt)
{
    flt_num = flt;
}

int Plane::getFltNum(void)
{
    return flt_num;
}

void Plane::setClockStart(int clock)
{
    clock_start = clock;
}

int Plane::getClockStart(void)
{
    return clock_start;
}

void Plane::setState(Plane_status status)
{
    state = status;
}

Plane_status Plane::getState(void)
{
    return state;
}
