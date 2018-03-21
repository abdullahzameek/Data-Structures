#include "DList.h"
#include "DNode.h"
#include <iostream>

using namespace std;

template <class T> class DList;

DList<int> newList;
DList<string> a;


int main()
{
    newList.addFront(50);
    newList.addMiddleAfter(12,50);
    newList.display();
    newList.addFront(45);
    newList.addFront(60);
    newList.addRear(88);
    newList.addFront(75);
    newList.addRear(44);
    newList.addMiddleBefore(55,60);
    newList.display();
    newList.isIn(75);
    newList.removeNode(75);
    newList.isIn(75);
    newList.display();

    cout<<endl;

    a.addFront("Hi");
    a.addFront("Hello");
    a.addRear("Bye");
    a.display();

    return 0;
}
