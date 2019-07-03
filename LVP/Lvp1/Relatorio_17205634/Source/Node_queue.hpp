/*
 * Node_queue.hpp
 *
 *  Created on: Aug 19, 2018
 *      Author: Freitas
 */

#ifndef NODE_QUEUE_HPP_
#define NODE_QUEUE_HPP_


#include "Plane.hpp"

class Node_queue
{
// Methods
public:

    Node_queue(void);//build
    ~Node_queue(void);//destroy

    void setNextNode(Node_queue* node);
    Node_queue* getNexNode(void);

    void setPlane(Plane& p);
    Plane getPlane(void);
    /*  Use: class Plane */

// Attributes
private:

    Node_queue* nextNode;// Pointer to next node of queue (PONTEIRO PARA O PROXIMO)
    Plane plane;// Plane's object (DADO)
};

#endif /* NODE_QUEUE_HPP_ */
