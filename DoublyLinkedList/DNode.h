#ifndef DNODE_H_INCLUDED
#define DNODE_H_INCLUDED
#include <stdio.h>
#include <ostream>

class DNode{

private:
    int elem;
    DNode* next;
    DNode* prev;
    friend class DList;
public:
    DNode(int value=0){
        elem= value;
        next= NULL;
        prev = NULL;
    }
};


#endif // DNODE_H_INCLUDED
