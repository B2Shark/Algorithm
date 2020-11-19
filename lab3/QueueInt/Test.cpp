#include "QueueInt.h"

int main()
{
    QueueInt* queue = new QueueInt();

    queue->enqueue(7);
    queue->enqueue(9);
    queue->enqueue(8);
    queue->enqueue(10);

    cout<< "dequeue value: " << queue->dequeue() << endl;

    cout<< "QueueInt size: " << queue->size() << endl;
    
    queue->printf();
}