#include "DLL.h"
#include <iostream>

NodeList::Iterator::Iterator(Node* u)
{
    v = u;
}

Elem& NodeList::Iterator::operator*()
{
    return v->elem;
}

bool NodeList::Iterator::operator==(const Iterator& p) const
{
    return v == p.v;
}

bool NodeList::Iterator::operator!=(const Iterator& p) const
{
    return v!= p.v;
}

NodeList::Iterator& NodeList::Iterator::operator++()
{
    v = v->next;
    return *this;
}

NodeList::Iterator& NodeList::Iterator::operator--()
{
    v = v->prev;
    return *this;
}

NodeList::NodeList(){
n = 0;
header = new Node;
trailer = new Node;
header->next = trailer;
trailer->prev = header;
}

int NodeList::getSize() const{
    return n;
}

bool NodeList::isEmpty() const{
return (n==0);
}

NodeList::Iterator NodeList::beginI() const{
return Iterator(header->next);
}

NodeList::Iterator NodeList::endI() const{
return Iterator(trailer);
}

void NodeList::insertGen(const Iterator& p, const Elem& e){
Node* w = p.v;
Node* u = w->prev;
Node* v = new Node;

v->elem = e;
v->next = w; w->prev = v;
v->prev = u; u->next = v;
n++;
}

void NodeList::insertFront(const Elem& e){
insertGen(beginI(), e);
}

void NodeList::insertBack(const Elem& e){
insertGen(endI(), e);
}

void NodeList::eraseGen(const Iterator& p){
Node* v = p.v;
Node* w = v->next;
Node* u = v-> prev;

u->next = w; w->prev =u;
delete v;
n--;
}

void NodeList::eraseFront(){
eraseGen(beginI());
}

void NodeList::eraseBack(){
eraseGen(endI());
}

void NodeList::display(){
for(Iterator p = beginI(); p!= endI(); ++p){
    std::cout<<p.v->elem<<"->";
}
std::cout<<"NULL"<<std::endl;
}
