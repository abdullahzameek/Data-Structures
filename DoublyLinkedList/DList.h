#ifndef DLIST_H_INCLUDED
#define DLIST_H_INCLUDED
#include "DNode.h"

using namespace std;

class DList{

private:
    DNode* head;
    DNode* tail;

public:
    DList(){
        head = new DNode;
        tail = new DNode;
        head->next = tail;
        tail->prev = head;
    }
    ~DList();
    void display();
    bool isEmpty() const;
    const int& getFront() const;
    const int& getRear() const;
    void addNode(DNode* v, const int& e);
    void addFront(const int& e);
    void addRear(const int& e);
    void addMiddleBefore(const int&e, const int& pos);
    void addMiddleAfter(const int&e, const int& pos);
    void removeNode(const int& e);
    void removeGen(DNode* v);
    void removeFront();
    void removeRear();
    bool isIn(const int& e);


};




#endif // DLIST_H_INCLUDED
