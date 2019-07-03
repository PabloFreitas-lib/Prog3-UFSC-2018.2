/*
 * Plane.hpp
 *
 *  Created on: Aug 19, 2018
 *      Author: Freitas
 */

#ifndef PLANE_HPP_
#define PLANE_HPP_


#include <iostream>
using namespace std;
enum Plane_status {null, arriving, departing}; // Indicates the plane state: arriving, departing or indefinite

class Plane
{
// Methods
public:

    Plane(void);
    /*  Post: The Plane data members flt_num, clock_start, state are set to illegal default values. */

    Plane(int flt, int time, Plane_status status);
    /*  Post: The Plane data members flt_num, clock_start, and state are set to the
            values of the parameters flt, time and status, respectively. */

    ~Plane(void);

    void refuse(void);
    /*  Post: Processes a Plane wanting to use Runway, when the Queue is full. */

    void land(int time);
    /*  Post: Processes a Plane that is landing at the specified time. */

    void fly(int time);
    /*  Post: Process a Plane that is taking off at the specified time. */

    int started(void);
    /*  Post: Return the time that the Plane entered the airport system. */

    void setFltNum(int = -1);
    int getFltNum(void);

    void setClockStart(int = -1);
    int getClockStart(void);

    void setState(Plane_status = null);
    Plane_status getState(void);

// Attributes
private:

    int flt_num;            // Flight's number
    int clock_start;        // Time that the Plane entered the airport system
    Plane_status state;     // Plane's state: arriving, departing or indefinite
};




#endif /* PLANE_HPP_ */
