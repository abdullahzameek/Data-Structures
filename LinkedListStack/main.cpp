#include <iostream>
#include "genList.h"
#include "genNode.h"
#include "LinkedStack.h"
//NOTE DO NOT USE ADDMIDDLE WITH STRINGS!!!!

using namespace std;
template<class T> class SLinkedList;


SLinkedList<float> a;
SLinkedList<float> myl;
SLinkedList<std::string> b;
LinkedStack z;

int main()
{
    a.addFront(4.25);
    a.addFront(46.2);
    a.display();

    myl.addFront(5);
    myl.addFront(10);
    myl.display();
    myl.addMiddleFront(8,5);
    myl.addMiddleFront(10,8);
    myl.addMiddleBefore(9,8);
    myl.addMiddleFront(58,15);
    myl.removeFront();
    myl.display();
    myl.removeNode(8);
    myl.addRear(45);
    //myl.addRear(78);
    myl.addMiddleBefore(14,78);
    myl.display();


    b.addFront("Abc");
    b.addFront("Def");
    //b.addMiddleFront("wgrg","Abc");
    b.display();

    z.push(4);
    z.push(8);
    z.pop();
    z.push(10);
    z.push(15);
    z.push(47);
    z.pop();

    int i = z.getSize();
    cout<<i<<endl;
    bool e = z.isEmpty();
    cout<<e<<endl;
    Elem k = z.getTop();
    cout<<k<<endl;
    z.displayStack();
    return 0;
}
