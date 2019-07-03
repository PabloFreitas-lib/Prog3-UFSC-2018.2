/*
 * Random.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: Freitas
 */

#include "Random.hpp"

Random::Random(bool pseudo)
{
    if (!pseudo) seed = 1;
    else seed = time(NULL) % INT_MAX;
    multiplier = 2743;
    add_on = 5923;
}

int Random::reseed(void)
{
    seed = seed * multiplier + add_on;
    return seed;
}

int Random::poisson(double mean)
{
    double limit = exp(-mean);
    double product = random_real();
    int count = 0;
    while (product > limit)
    {
        count++;
        product *= random_real();
    }
    return count;
}

double Random ::random_real(void)
{
    double max = INT_MAX + 1.0;
    double temp = reseed();
    if (temp < 0) temp = temp + max;
    return temp/max;
}
