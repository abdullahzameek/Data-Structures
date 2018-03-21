#include <iostream>
#include "CNode.h"
#include "CList.h"

using namespace std;
template <class T> class CList;

template<typename E>
CList<E>::CList():
    cursor(NULL){}

template<typename E>
CList<E>::~CList(){
while(!isEmpty()) removeElem();
}

template<typename E>
void CList<E>::display(){
CNode<E>* old = cursor;
CNode<E>* travNode = cursor->next;

while(travNode != old){
    cout<<travNode->elem<<"->";;
    travNode = travNode->next;
}
cout<<cursor->elem<<endl;
}

template<typename E>
bool CList<E>::isEmpty() const{
if(cursor == NULL){
    cout<<"Yep, the list is empty"<<endl;
    return true;
}
else{return false;}
}

template<typename E>
const E& CList<E>::getFront() const{
return cursor->next->elem;
}

template<typename E>
const E& CList<E>::getRear() const{
return cursor->elem;
}

template<typename E>
void CList<E>::advance(){
cursor = cursor->next;
}

template<typename E>
void CList<E>::add(const E& e){
CNode<E>* temp = new CNode<E>;
temp->elem = e;
if(cursor==NULL){
    temp->next = temp;
    cursor = temp;
}
else{
    temp->next = cursor->next;
    cursor->next = temp;
}
}

template<typename E>
void CList<E>::removeElem(){
CNode<E>* temp = cursor->next;
if(temp==cursor){
    cursor = NULL;
}
else{
    cursor->next = temp->next;
}
delete temp;
}

template class CList<int>;
template class CList<std::string>;
