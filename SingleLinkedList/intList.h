#ifndef INTLIST_H_INCLUDED
#define INTLIST_H_INCLUDED
#include "intNode.h"
using namespace std;

class intList{

private:
    intNode* head;
public:

    intList(){
        head = NULL;
    }
    ~intList(); //done
    void display(); //done
    bool isEmpty() const;
    const int& getFront() const; //done
    void addFront(const int& e); //done
    void addRear(const int& e);
    void removeFront(); //done
    void addMiddleFront(const int& e, const int& pos);
    void addMiddleBefore(const int&e, const int& pos);
    bool isIn(const int& e);
    void removeNode(const int& e);

};



//constructor of the class

#endif // INTLIST_H_INCLUDED
