#include <iostream>
#include "CNode.h"
#include "CList.h"

using namespace std;

CList::CList():
    cursor(NULL){}

CList::~CList(){
while(!isEmpty()) removeElem();
}

void CList::display(){
CNode*old = cursor;
CNode*travNode = cursor->next;

while(travNode != old){
    cout<<travNode->elem<<"->";;
    travNode = travNode->next;
}
cout<<cursor->elem<<endl;
}

bool CList::isEmpty() const{
if(cursor == NULL){
    cout<<"Yep, the list is empty"<<endl;
    return true;
}
else{return false;}
}

const int& CList::getFront() const{
return cursor->next->elem;
}

const int& CList::getRear() const{
return cursor->elem;
}


void CList::advance(){
cursor = cursor->next;
}

void CList::add(const int& e){
CNode* temp = new CNode;
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

void CList::removeElem(){
CNode* temp = cursor->next;
if(temp==cursor){
    cursor = NULL;
}
else{
    cursor->next = temp->next;
}
delete temp;
}

