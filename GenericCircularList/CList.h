#ifndef CLIST_H_INCLUDED
#define CLIST_H_INCLUDED
#include "CNode.h"

template<class T> class CNode;
template  <typename E>

class CList{
public:
    CList();
    ~CList();
    bool isEmpty() const;
    const E& getFront() const;
    const E& getRear() const;
    void advance();
    void add(const E& e);
    void display();
    void removeElem();

private:
    CNode<E>* cursor;







};


#endif // CLIST_H_INCLUDED
