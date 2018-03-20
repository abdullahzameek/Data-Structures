#include "IntStack.h"
#include <iostream>
using namespace std;
//enum {CAPACITY = 100};

IntStack::IntStack(int cap = CAPACITY){
    S = new int[cap];
    capacity = cap;
    t = -1;
}

IntStack::~IntStack(){
while(!isEmpty()){
    pop();
}
delete[] S;
}

int IntStack::getSize() const {
//cout<<"The size of the stack is : ";
return (t+1);
}

bool IntStack::isEmpty() const{
if (t<0){
    cout<<"Yep, the stack's empty!"<<endl;
    return true;
}
else{return false;}
}

const int& IntStack::getTop() const{
if (isEmpty()) {
cout<<"Stack is empty";
return(-1);
}
else {
    cout<<"The top is: ";
    return(S[t]);
    cout<<endl;
}
}

void IntStack::push(const int& e){
if (getSize() == capacity){
    cout<<"Stack is full!"<<endl;
}
else{
    S[++t] = e;
}
}

void IntStack::pop(){
if (isEmpty()){
    cout<<"Stack is already empty!"<<endl;
}
else{
    --t;
}
}

void IntStack::displayStack(){
if(isEmpty()){
    cout<<"Stack is empty!"<<endl;
}
else{
    for(int i=0; i <=t; ++i){
        cout<<S[i]<<endl;;
    }
}
}


