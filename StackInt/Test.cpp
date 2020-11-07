#include "StackInt.h"

int main()
{
    StackInt *stack = new StackInt();
    stack->push(7);
    stack->push(9);
    stack->push(5);

    //cout<<"Elements deleted: "<<stack->pop();
    cout<<"Top is: "<<stack->top()<<endl;

    //stack->printf();

    //check Stack
    if(stack->isEmty())
        cout<<"Stack is Emty!!";
    else
        cout<<"Stack not Emty!!";
}