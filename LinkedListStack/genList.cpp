#include "genList.h"
#include "genNode.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

template <typename E>
SLinkedList<E>::SLinkedList():
    head(NULL) {}

template <typename E>
bool SLinkedList<E>::isEmpty() const
{
    return head == NULL;
}

template <typename E>
const E& SLinkedList<E>::getFront() const{
return head->elem;
}

template <typename E>
void SLinkedList<E>::addFront(const E& e){
SNode<E>* v = new SNode<E>;
v->elem = e;
v->next = head;
head = v;
}

template <typename E>
void SLinkedList<E>::removeFront(){
SNode<E>* old = head;
head = old->next;
delete old;
}

template <typename E>
void SLinkedList<E>::display(){
SNode<E> *cur = head;
std::cout << "\n";
while(cur != NULL){
    std::cout << cur -> elem <<"->";
    cur = cur->next;
}
std::cout<<"NULL";
std::cout << "\n";
}

template <typename E>
SLinkedList<E>::~SLinkedList(){
while(!isEmpty()) removeFront();
}


template <typename E>
void SLinkedList<E>::addMiddleFront(const E& e, const E& pos){
if(isIn(pos)){
SNode<E>* temp = new SNode<E>;
temp->elem = e;
SNode<E>* travNode = head;
while((travNode->elem) != pos){
    travNode = travNode->next;
}
temp->next = travNode->next;
travNode->next = temp;
}
else{
    cout<<"Elem not in list ha!"<<endl;
}
}

template <typename E>
void SLinkedList<E>::addMiddleBefore(const E&e, const E& pos){
if(isIn(pos)){
SNode<E>* temp = new SNode<E>;
temp->elem = e;
SNode<E>* cur = head;
SNode<E>* prev = head;
while((cur->elem) != pos){
    prev = cur;
    cur = cur->next;
}
temp->next = cur;
prev->next = temp;
}
else{
    cout<<"Elem not in list ha!"<<endl;
}
}
template <typename E>
bool SLinkedList<E>::isIn(const E& e){
SNode<E>* travNode = head;
while(travNode != NULL){
    if((travNode->elem) == e){
        return true;
    }
    travNode = travNode -> next;
}
return false;
}

template <typename E>
void SLinkedList<E>::removeNode(const E& e){
if(!isEmpty()){
    SNode<E>* cur = head;
    SNode<E>* prev = head;
    while((cur->elem) != e){
        prev = cur;
        cur = cur-> next;
    }
    prev->next = cur->next;
    delete cur;
    cout<<"Deleted"<<endl;
}
else{
    cout<<"list is empty"<<endl;
}
}

template <typename E>
void SLinkedList<E>::addRear(const E& e){
SNode<E>* temp = new SNode<E>;
temp -> elem = e;

if(!isEmpty()){
   SNode<E>* cur = head;
   while((cur->next) != NULL){
        cur = cur -> next;
   }
        cur->next = temp;
   }
}

template class SLinkedList<int>;
template class SLinkedList<std::string>;
template class SLinkedList<float>;
