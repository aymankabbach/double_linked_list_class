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
    void PrintList()
    {
        cout << "NULL <--> ";
        Node* Current = head;
        while (Current != NULL) 
        {
            cout << Current->value << " <--> ";
            Current = Current->next;
        }
        cout << "NULL";
        cout<<endl;
    }
    Node* Find(T value)
    {
        Node* Current = head;
        while (Current != NULL)
        {
            if (Current->value == value)
                return Current;
            Current = Current->next;
        }
        return NULL;
    }
    void InsertAfter(Node* node, T value)
    {
        Node* newNode= new Node();
        newNode->value=value;
        newNode->next=node->next;
        newNode->prev=node;
        if (node->next!= NULL)
        {
            node->next->prev=newNode;
        }
        node->next=newNode;
        _size++;
    }
    void InsertAtEnd(T value)
    {
        Node* newNode= new Node();
        newNode->value=value;
        newNode->next=NULL;
        if (head==NULL)
        {
            newNode->prev=NULL;
            head=newNode;
        }
        else
        {
            Node* Current = head;
            while (Current->next != NULL)
            {
                Current=Current->next;
            }
            newNode->prev=Current;
            Current->next=newNode;
        }
        _size++;
    }
};