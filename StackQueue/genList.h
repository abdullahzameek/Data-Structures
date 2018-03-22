#ifndef GENLIST_H_INCLUDED
#define GENLIST_H_INCLUDED

#include "genNode.h"

template<class T> class SNode;

template <typename E>
class SLinkedList{
public:
    SLinkedList();
    ~SLinkedList();
    bool isEmpty() const;
    const E& getFront() const;
    void addFront(const E& e);
    const E& removeFront();
    void display();
    void addRear(const E& e);
    void addMiddleFront(const E& e, const E& pos);
    void addMiddleBefore(const E&e, const E& pos);
    bool isIn(const E& e);
    void removeNode(const E& e);

private:
    SNode<E>* head;

};


#endif // GENLIST_H_INCLUDED
