#ifndef STACKQUEUE_H_INCLUDED
#define STACKQUEUE_H_INCLUDED

#include<iostream>
#include "LinkedStack.h"
#include "genNode.h"
#include "genList.h"

class StackQueue{
public:
    LinkedStack inputStack;
    LinkedStack outputStack;

    void enqueue(const Elem& e);
    void dequeue();
    int getSize();
    bool isEmpty();
    void displayQueue();

};


#endif // STACKQUEUE_H_INCLUDED
