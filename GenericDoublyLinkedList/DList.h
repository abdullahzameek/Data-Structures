#ifndef DLIST_H_INCLUDED
#define DLIST_H_INCLUDED
#include "DNode.h"

using namespace std;
template <typename E>
class DList{

private:
    DNode<E>* head;
    DNode<E>* tail;

public:
    DList(){
        head = new DNode<E>;
        tail = new DNode<E>;
        head->next = tail;
        tail->prev = head;
    }
    ~DList();
    void display();
    bool isEmpty() const;
    const E& getFront() const;
    const E& getRear() const;
    void addNode(DNode<E>* v, const E& e);
    void addFront(const E& e);
    void addRear(const E& e);
    void addMiddleBefore(const E&e, const E& pos);
    void addMiddleAfter(const E&e, const E& pos);
    void removeNode(const E& e);
    void removeGen(DNode<E>* v);
    void removeFront();
    void removeRear();
    bool isIn(const E& e);


};




#endif // DLIST_H_INCLUDED
