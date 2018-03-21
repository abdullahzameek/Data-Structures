#include "DList.h"
#include "DNode.h"
#include <iostream>

template<class T> class DNode;

using namespace std;

template <typename E>
void DList<E>::display(){
DNode<E>* cur = head->next;
cout<<"Displaying..."<<endl;
while((cur->next) != NULL){
    cout<<cur->elem<<"->";
    cur = cur -> next;
}
cout<<"NULL";
cout<<endl;
}

template <typename E>
bool DList<E>::isEmpty()const {
if((head->next) == tail){
    cout<<"Yep, the list is empty!"<<endl;
    return true;
}
else{
    //cout<<"Nope,not empty"<<endl;
    return false;
}
}

template <typename E>
const E& DList<E>::getFront() const{
cout<<"The first element is " <<endl;
return head->next->elem;
}

template <typename E>
const E& DList<E>::getRear() const{
cout<<"The last element is "<<endl;
return tail->prev->elem;
}

template <typename E>
void DList<E>::addNode(DNode<E>* v, const E& e){
DNode<E>* temp = new DNode<E>();
temp->elem = e;
temp->next = v;
temp->prev = v->prev;
v->prev->next = v->prev = temp;
}

template <typename E>
void DList<E>::addFront(const E& e){
addNode(head->next,e);
}

template <typename E>
void DList<E>::addRear(const E& e){
addNode(tail->prev,e);
}

template <typename E>
void DList<E>::addMiddleBefore(const E&e, const E& pos){
DNode<E>* temp = new DNode<E>();
temp->elem = e;
DNode<E>* cur = head;
while((cur->elem) != pos){
    cur = cur->next;
}
temp->next = cur;
temp->prev = cur->prev;
cur->prev->next = temp;
cur->prev = temp;
}

template <typename E>
void DList<E>::addMiddleAfter(const E&e, const E& pos){
DNode<E>* temp = new DNode<E>();
temp->elem = e;
DNode<E>* cur = head;

while((cur->elem) != pos){
    cur = cur -> next;
}
temp->next = cur->next;
temp->prev = cur;
cur->next->prev = temp;
cur->next = temp;
}

template <typename E>
void DList<E>::removeGen(DNode<E>* v){
DNode<E>* u = v->prev;
DNode<E>* w = v->next;
u->next = w;
w->prev = u;
delete v;
}

template <typename E>
void DList<E>::removeFront(){
removeGen(head->next);
}

template <typename E>
void DList<E>::removeRear(){
removeGen(tail->prev);
}

template <typename E>
void DList<E>::removeNode(const E& e){
DNode<E>* cur = head;
while((cur->elem) != e){
    cur = cur -> next;
}
cur->prev->next = cur->next;
cur->next->prev = cur->prev;
delete cur;
cout<<"Deleted node"<<endl;
}

template <typename E>
bool DList<E>::isIn(const E &e){
DNode<E>* cur = head;
while((cur->next) != NULL){
    if (cur->elem == e){
        cout<<"Found"<<endl;
        return true;
    }
cur = cur->next;
}
cout<<"Not found"<<endl;
return false;
}

template <typename E>
DList<E>::~DList(){
while((!isEmpty())) removeFront();
delete head;
delete tail;
}

template class DList<int>;
template class DList<std::string>;
