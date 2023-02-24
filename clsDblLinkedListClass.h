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
    void DeleteNode(Node* node)
    {
        node->prev->next=node->next;
        node->next->prev=node->prev;
        _size--;
    }
    void DeleteFirstNode()
    {
        if (head==NULL)
        {
            return;
        }
        Node* temp=head;
        head=head->next;
        if (head!=NULL)
        {
            head->prev=NULL;
        }
        delete temp;
        _size--;
    }
    void DeleteLastNode()
    {
        if (head==NULL)
        {
            return;
        }
        Node* temp=head;
        while (temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->prev->next=NULL;
        delete temp;
        _size--;
    }
    short size()
    {
        return _size;
    }
    bool is_empty()
    {
        return size()==0;
    }
    void reverse()
    {
        Node* Current=head;
        Node* temp=nullptr;
        while (Current != nullptr)
        {
            temp=Current->prev;
            Current->prev=Current->next;
            Current->next=temp;
            Current=Current->prev;
        }
        if (temp!=nullptr)
        {
            head=temp->prev;
        }
    }
    Node* get_node(short index)
    {
        int pos=0;
        if (index<0 || index>=size())
        {
            return NULL;
        }
        Node* Current = head;
        while (Current != NULL)
        {
            if (pos == index)
                return Current;
            Current = Current->next;
            pos++;
        }
        return NULL;
    }
    T get_item(int index)
    {
        Node* item_node=get_node(index);
        if (item_node!=NULL)
        {
            return item_node->value;
        }
    }
    void Update_item(int index, T value)
    {
        Node* node=get_node(index);
        if (node != NULL)
        {
           node->value=value; 
        }
    }
};