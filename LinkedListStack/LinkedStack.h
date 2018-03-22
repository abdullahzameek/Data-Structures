#ifndef LINKEDSTACK_H_INCLUDED
#define LINKEDSTACK_H_INCLUDED
#include "genList.h"
#include "genNode.h"
#include <iostream>

using namespace std;


typedef int Elem;
class LinkedStack{
public:
    LinkedStack();
    int getSize() const;
    bool isEmpty() const;
    const Elem& getTop() const;
    void push(const Elem& e);
    void pop();
    void displayStack();

private:
    SLinkedList<Elem> S;
    int n;






};


#endif // LINKEDSTACK_H_INCLUDED
