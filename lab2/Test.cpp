#include "LinkedList.h"

int main()
{
    LinkedList* list = new LinkedList();
    list->addNode(7);
    list->addNode(9);
    list->addNode(8);

    list->delNode(9);
    list->printf();
}