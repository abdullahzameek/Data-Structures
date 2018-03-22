#include <iostream>
#include "genList.h"
#include "genNode.h"
#include "LinkedStack.h"
#include "StackQueue.h"
//NOTE DO NOT USE ADDMIDDLE WITH STRINGS!!!!

using namespace std;
template<class T> class SLinkedList;

StackQueue Queue;

int main()
{
    Queue.enqueue(5);
    Queue.enqueue(10);
    Queue.enqueue(15);
    Queue.enqueue(20);
    Queue.enqueue(35);
    Queue.dequeue();
    int i = Queue.getSize();
    cout<<i<<endl;
    Queue.displayQueue();
    Queue.dequeue();
    Queue.displayQueue();
    return 0;
}
