/*
 * Extended_queue.cpp
 *
 *  Created on: Aug 19, 2018
 *      Author: Freitas
 */

#include "Extended_queue.hpp"

/*  Post: The pointers to first and last node of Extended_queue are set like nulls and Extended_queue size is set like 0 */

//-------------------BUILD-------------------------

Extended_queue::Extended_queue(void)
{
    firstNode = nullptr;
    lastNode = nullptr;
    queueSize = 0;

}
//---------------DESTROY-------------------------------

/*  Post: Are removed all nodes of Extended_queue */
Extended_queue::~Extended_queue(void)
{
	if(size())
    {
		cout << "Fila vazia, nao se pode destruir.\n" << endl;
	}
	while(!empty())
        serve();
}

//----------------BASIC--------------------------------

/*  Post: Returns current Extended_queue size */
unsigned int Extended_queue::size(void)
{
    return(queueSize);
}

/*  Post: Returns true if Extended_queue is empty */
bool Extended_queue::empty(void)
{
    if(size() == 0)
        return(true);
    else
        return(false);
}

/*  Post: Returns in plane the first at Extended_queue
        Use: classe Plane */
void Extended_queue::retrieve(Plane& plane)
{
	if(empty())
    {
		cout << "Fila esta Vazia." << endl;
		return;
	}
	Node_queue *node_aux = getFirstNode();
	plane = node_aux->getPlane();
}

//----------------Enqueue-------------------------------

/*  Post: Appends a plane at Extended_queue
        Use: class Plane */
Error_code Extended_queue::append(Plane &plane)
{
        Node_queue *new_node;
         
            try
            {
               new_node = new Node_queue;
            }
            catch(bad_alloc&)
            {
                return(internal_error);
            }
            
        new_node->setPlane(plane);

		if(empty())
        {
            firstNode = new_node;
            lastNode = new_node;
            new_node->setNextNode(nullptr);
            queueSize = 1;
            return(success);
		}
		else if(queueSize > 0)
        {
            getLastNode()->setNextNode(new_node);
            lastNode = new_node;
            new_node->setNextNode(nullptr);
            queueSize++;
            return(success);
		}
		else
        {
            return(fail);
        }
}
// ---------------DEQUEUE--------------------------------------------------

/*  Post: Removes the first at queue and frees the respective memory */
void Extended_queue::serve(void)
{
	if(empty())
    {
		cout << "Fila ja esta vazia \n" << endl;
		return;
	}
	
	Node_queue *head;
	head =  getFirstNode();
	firstNode = head->getNexNode();
	delete head;
    head = nullptr; // unecessary 
	queueSize = queueSize - 1;
}

//-------------------------Private------------------------------------------

void Extended_queue::setFirstNode(Node_queue* node)
{
    firstNode = node;
}


void Extended_queue::setLastNode(Node_queue* node)
{
    lastNode = node;
}

Node_queue * Extended_queue::getFirstNode(void)
{
    return(firstNode);
}

Node_queue* Extended_queue::getLastNode(void)
{
    return(lastNode);
}

