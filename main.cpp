#include <iostream>
#include "clsDblLinkedListClass.h"

using namespace std;

int main()
{
    clsDblLinkedList <int> MyDblLinkedList;
    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    MyDblLinkedList.InsertAtBeginning(1);
    MyDblLinkedList.PrintList();
    clsDblLinkedList<int>::Node* N1=MyDblLinkedList.Find(2);
    if (N1 != NULL)
    {
        cout<<"Node with value 2 was found"<<endl;
    }
    else
    {
        cout<<"Node was not found"<<endl;
    }
    system("pause");
    return 0;
}