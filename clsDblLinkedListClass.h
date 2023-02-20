#pragma once
#include <iostream>

using namespace std;

template <class T>
class clsDblLinkedList
{
protected:
    int _size=0;
public:
    class Node
    { 
    public:
        T value;
        Node* next;
        Node* prev;
        
    };
    Node* head = NULL;
    void InsertAtBeginning(T value)
    {
        Node* newNode= new Node();
        newNode->value=value;
        newNode->next=head;
        newNode->prev=NULL;

        if (head!=NULL)
        {
            head->prev=newNode;
        }
        head=newNode;
        _size++;
    }
};