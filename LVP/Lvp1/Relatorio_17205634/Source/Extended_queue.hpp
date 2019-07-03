/*
 * Extended_queue.hpp
 *
 *  Created on: Aug 19, 2018
 *      Author: Freitas
 */

#ifndef EXTENDED_QUEUE_HPP_
#define EXTENDED_QUEUE_HPP_


#include "Node_queue.hpp"

enum Error_code {success, fail, internal_error}; // Indicates if plane has been appended to Extended_queue or not

class Extended_queue
{
// Methods
public:

    Extended_queue(void);
    /*  Post: The pointers to first and last node of Extended_queue are set like nulls and Extended_queue size is set like 0 */

    ~Extended_queue(void);
    /*  Post: Are removed all nodes of Extended_queue */

    unsigned int size(void);
    /*  Post: Returns current Extended_queue size */

    bool empty(void);
    /*  Post: Returns true if Extended_queue is empty */

    Error_code append(Plane& plane);
    /*  Post: Appends a plane at Extended_queue
        Use: class Plane */

    void retrieve(Plane& plane);
    /*  Post: Returns in plane the first at Extended_queue
        Use: classe Plane */

    void serve(void);
    /*  Post: Removes the first at queue and frees the respective memory */

private:

    void setFirstNode(Node_queue* node);
    Node_queue* getFirstNode(void);

    void setLastNode(Node_queue* node);
    Node_queue* getLastNode(void);

// Attributes
private:

    unsigned int queueSize;     // Size of Extended_queue
    Node_queue* firstNode;      // First's pointer to node of Extended_queue
    Node_queue* lastNode;       // Last's pointer to node of Extended_queue
};




#endif /* EXTENDED_QUEUE_HPP_ */
