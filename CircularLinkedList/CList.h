#ifndef CLIST_H_INCLUDED
#define CLIST_H_INCLUDED
#include "CNode.h"

class CList{
public:
    CList();
    ~CList();
    bool isEmpty() const;
    const int& getFront() const;
    const int& getRear() const;
    void advance();
    void add(const int& e);
    void display();
    void removeElem();

private:
    CNode* cursor;







};


#endif // CLIST_H_INCLUDED
