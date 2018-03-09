#ifndef INTNODE_H_INCLUDED
#define INTNODE_H_INCLUDED
#include <stdio.h>
#include <ostream>

class intNode{



private:
    int elem;
    intNode* next;
    friend class intList;
public:
    intNode(int value=0) {
        elem= value;
        next= NULL;
    }
};

#endif // INTNODE_H_INCLUDED
