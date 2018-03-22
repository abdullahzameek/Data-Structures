#ifndef GENNODE_H_INCLUDED
#define GENNODE_H_INCLUDED
#include "genList.h"
template <typename E>
class SNode{
public:
    E elem;
    SNode<E>* next;
    //friend class SLinkedList;
};


#endif // GENNODE_H_INCLUDED
