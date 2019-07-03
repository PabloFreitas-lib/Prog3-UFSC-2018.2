/*
 * Random.hpp
 *
 *  Created on: Aug 19, 2018
 *      Author: Freitas
 */

#ifndef RANDOM_HPP_
#define RANDOM_HPP_



#include <cstddef>
#include <ctime>
#include <climits>
#include <cmath>
#include <iostream>
using namespace std;

class Random
{
// Methods
public:

    Random(bool pseudo = true);
    /*  Post: The values of seed, add_on, and multiplier are initialized. The seed is
            initialized randomly only if pseudo == false. */

    int poisson(double mean);
    /*  Post: The seed is replaced by a pseudorandom successor. */

    double random_real(void);
    /*  Post: A random integer, reflecting a Poisson distribution with parameter mean,
            is returned. */

private:

    int reseed(void);
    /* Post: A random real number between 0 and 1 is returned. */

// Attributes
private:

    int seed, multiplier, add_on; // Constants for use in arithmetic operations
};


#endif /* RANDOM_HPP_ */
