#ifndef CNODE_H_INCLUDED
#define CNODE_H_INCLUDED

template <typename E>
class CNode{
public:
    E elem;
    CNode<E>* next;

    //friend class CList;

};


#endif // CNODE_H_INCLUDED
