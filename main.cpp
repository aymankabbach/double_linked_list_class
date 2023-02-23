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
    MyDblLinkedList.InsertAfter(N1,500);
    cout<<"linked list after insering 500 after 2"<<endl;
    MyDblLinkedList.PrintList();
    cout<<"linked list after insering 700 at end"<<endl;
    MyDblLinkedList.InsertAtEnd(700);
    MyDblLinkedList.PrintList();
    clsDblLinkedList<int>::Node* N2=MyDblLinkedList.Find(4);
    cout<<"linked list after deleting 4"<<endl;
    MyDblLinkedList.DeleteNode(N2);
    MyDblLinkedList.PrintList();
    cout<<"linked list after deleting first node"<<endl;
    MyDblLinkedList.DeleteFirstNode();
    MyDblLinkedList.PrintList();
    system("pause");
    return 0;
}