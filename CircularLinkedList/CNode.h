#ifndef CNODE_H_INCLUDED
#define CNODE_H_INCLUDED
class CNode{
private:
    int elem;
    CNode* next;

    friend class CList;

};


#endif // CNODE_H_INCLUDED
