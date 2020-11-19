#include "StackInt.h"

int main()
{
    StackInt* stack = new StackInt();
    stack->push(7);
    stack->push(6);
    stack->push(8);
    stack->push(9);

    cout<< "Top value:" << stack->top() <<endl;

    cout<< "Pop value:" << stack->pop() <<endl;

    cout<< "Size Stack:" << stack->size() <<endl;

    if(stack->isEmty())
        cout<< "Stack is Emty" << endl;
    else
        cout<< "Stack isn't Emty" << endl;

    stack->printf();
}