#include "LinkedList.h"

LinkedList::LinkedList()
{
    head = nullptr;
}

void LinkedList::insertItem(int data)
{
    Node* temp = new Node();
    temp->value = data;
    temp->next = head;
    head = temp;
}

void LinkedList::insertFist(int data)
{
    Node* fist = new Node();
    fist->value = data;
    fist->next = nullptr;

    //create pointer curr to run
    Node* curr = head;
    
    if(curr == nullptr)
    {
        fist->next = curr;
        curr = fist;
        return;
    }

    while(curr->next != nullptr)
    {
        curr = curr->next;
    }

    curr->next = fist;
    return;
}

void LinkedList::printList()
{
    Node* curr = head;

    while(curr != nullptr)
    {
        cout<<curr->value<<"\t";
        curr = curr->next;
    }
}

void LinkedList::insertLast(int data) // = insertItem
{
    Node* temp = new Node();
    temp->value = data;
    temp->next = head;
    head = temp;
}

void LinkedList::makeList(LinkedList* my_list,int intArrays[], int numNodes)
{
    for(int i = 0; i < numNodes ; ++i)
    {
        my_list->insertItem(intArrays[i]);
    }
}

void LinkedList::deleteItem(int data)
{
    Node* curr = head;
    
    if(curr == nullptr)
    {
        cout<<"LinkedList is Emty"<<endl;
    }
    else
    {
        Node* prev = nullptr;// save location before pointer curr

        //point curr to run find curr->data = data
        while(curr != nullptr)
        {
            if(curr->value == data)
                break;
            prev = curr;//pointer prev before point curr
            curr = curr->next;
        }

        if(curr == nullptr)
            cout<<"Data can delele NOT FOUND"<<endl;
        else
        {
            if(curr == head)
            {
                head = head->next;
                curr = nullptr;
                delete(curr);
            }

            else
            {
                prev->next = curr->next;
                curr = nullptr;
                delete(curr);
                //delete(prev);
            }
            
        }
        
    }

}

