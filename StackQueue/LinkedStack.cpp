#include "LinkedStack.h"
#include "genNode.h"
#include "genList.h"
#include <iostream>

using namespace std;

LinkedStack::LinkedStack(): S(), n(0) {}

int LinkedStack::getSize() const{
return n;
}

bool LinkedStack::isEmpty() const{
return n == 0;
}

const Elem& LinkedStack::getTop() const{
if(!isEmpty()){
    return S.getFront();
}
else{cout<<"Empty Stack!";}
}

int LinkedStack::pop(){
if (!isEmpty()) {
    --n;
    return S.removeFront();
}
else{cout<<"Empty Stack!";}
}

void LinkedStack::push(const Elem& e){
++n;
S.addFront(e);
}

void LinkedStack::displayStack(){
S.display();
}
