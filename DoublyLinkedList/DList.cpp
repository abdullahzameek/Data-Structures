#include "DList.h"
#include "DNode.h"
#include <iostream>

using namespace std;

void DList::display(){
DNode* cur = head;
cout<<"Displaying..."<<endl;
while((cur->next) != NULL){
    cout<<cur->elem<<"->";
    cur = cur -> next;
}
cout<<"NULL";
cout<<endl;
}


bool DList::isEmpty()const {
if((head->next) == tail){
    cout<<"Yep, the list is empty!"<<endl;
    return true;
}
else{
    //cout<<"Nope,not empty"<<endl;
    return false;
}
}

const int& DList::getFront() const{
cout<<"The first element is " <<endl;
return head->next->elem;
}

const int& DList::getRear() const{
cout<<"The last element is "<<endl;
return tail->prev->elem;
}

void DList::addNode(DNode* v, const int& e){
DNode* temp = new DNode(e);
temp->next = v;
temp->prev = v->prev;
v->prev->next = v->prev = temp;
}


void DList::addFront(const int& e){
addNode(head->next,e);
}

void DList::addRear(const int& e){
addNode(head->next,e);
}

void DList::addMiddleBefore(const int&e, const int& pos){
DNode* temp = new DNode(e);
DNode* cur = head;
while((cur->elem) != pos){
    cur = cur->next;
}
temp->next = cur;
temp->prev = cur->prev;
cur->prev->next = temp;
cur->prev = temp;
}

void DList::addMiddleAfter(const int&e, const int& pos){
DNode* temp = new DNode(e);
DNode* cur = head;

while((cur->elem) != pos){
    cur = cur -> next;
}
temp->next = cur->next;
temp->prev = cur;
cur->next->prev = temp;
cur->next = temp;
}

void DList::removeGen(DNode* v){
DNode* u = v->prev;
DNode* w = v->next;
u->next = w;
w->prev = u;
delete v;
}

void DList::removeFront(){
removeGen(head->next);
}

void DList::removeRear(){
removeGen(tail->prev);
}
void DList::removeNode(const int & e){
DNode* cur = head;
while((cur->elem) != e){
    cur = cur -> next;
}
cur->prev->next = cur->next;
cur->next->prev = cur->prev;
delete cur;
cout<<"Deleted node"<<endl;
}

bool DList::isIn(const int &e){
DNode* cur = head;
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

DList::~DList(){
while((!isEmpty())) removeFront();
delete head;
delete tail;
}
