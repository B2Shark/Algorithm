#include "QueueInt.h"

int main()
{
    QueueInt* que = new QueueInt();

    //Enqueue
    que->enqueue(7);
    que->enqueue(8);
    que->enqueue(5);
    que->enqueue(10);
    
    //print Queue
    que->printf();

    //deuqe Element
    cout<< endl << "Element dequeued: " << que->dequeue() << endl;

    //
    cout<< "Fist element: " << que->fist() << endl;
    cout<< "Last element: " << que->last() << endl; 


}