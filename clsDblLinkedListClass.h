#pragma once
#include <iostream>

using namespace std;

template <class T>
class clsDblLinkedList
{
public:
    class Node
    { 
    public:
        T value;
        Node* next;
        Node* prev;
        
    };
    Node* head = NULL;
};