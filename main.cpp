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
    system("pause");
    return 0;
}