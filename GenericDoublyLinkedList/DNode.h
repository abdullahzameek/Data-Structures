#ifndef DNODE_H_INCLUDED
#define DNODE_H_INCLUDED
#include <stdio.h>
#include <ostream>

template<typename E>

class DNode{

public:
    E elem;
    DNode<E>* next;
    DNode<E>* prev;
    DNode(const E &e = E(), DNode *n = NULL, DNode *p = NULL) : elem(e), next(n), prev(p) {}
    //friend class DList;


};


#endif // DNODE_H_INCLUDED
