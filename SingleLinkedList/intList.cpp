#include <iostream>
#include "intNode.h"
#include "intList.h"

//check if the list is empty by checking if head = NULL
bool intList::isEmpty() const{
    if(head == NULL){
        return true;
    }
    else {
        return false;
    }
}

void intList::display(){
intNode *cur = head;
cout << endl;
while(cur != NULL){
    cout << cur -> elem <<" ";
    cur = cur->next;
}
cout << endl;
}

void intList::addFront(const int& e){
intNode* temp = new intNode(e);
temp->next = head;
head = temp;
cout<<"Added element"<<endl;
}

const int& intList::getFront() const{
    intNode *cur = head;
    cout << "Returning front.."<<endl;
    return cur -> elem;

}

void intList::addMiddleFront(const int& e, const int& pos){
if(isIn(pos)){
intNode* temp = new intNode(e);
intNode* travNode = head;
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

void intList::addMiddleBefore(const int&e, const int& pos){
if(isIn(pos)){
intNode* temp = new intNode(e);
intNode* cur = head;
intNode* prev = head;
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

void intList::removeFront(){
if (!isEmpty()){
    intNode *temp = head;
    head = head -> next;
    delete temp;
    cout << "Deleted front"<<endl;
}
else{
    cout << "List is already empty"<<endl;
}
}

bool intList::isIn(const int& e){
intNode* travNode = head;
while(travNode != NULL){
    if((travNode->elem) == e){
        return true;
    }
    travNode = travNode -> next;
}
return false;
}

void intList::removeNode(const int& e){
if(!isEmpty()){
    intNode* cur = head;
    intNode* prev = head;
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

void intList::addRear(const int& e){
intNode* temp = new intNode(e);
if(!isEmpty()){
   intNode* cur = head;
   while((cur->next) != NULL){
        cur = cur -> next;
   }
        cur->next = temp;
   }
}
//destructor of the class
intList::~intList() {while (!isEmpty()) removeFront();}


