/*
 * Node_queue.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: Freitas
 */

#include "Extended_queue.hpp"

Node_queue::Node_queue(void)// build
{

}

Node_queue::~Node_queue(void)// destroy
{

}

void Node_queue::setNextNode(Node_queue* node)
{
    nextNode = node;
}

Node_queue * Node_queue::getNexNode(void)
{
    return nextNode;
}

void Node_queue::setPlane(Plane &p)
{
    plane = p;
}

Plane Node_queue::getPlane(void)
{
    return(plane);
}
