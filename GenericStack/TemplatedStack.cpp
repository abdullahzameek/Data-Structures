#include "TemplatedStack.h"
#include <iostream>

using namespace std;

template <typename Elem> StackArray<Elem>::StackArray(int cap):
    Stack(new Elem[cap]), capacity(cap), t(-1){}

template<typename Elem> StackArray<Elem>::~StackArray(){
while(!isEmpty()) pop();
delete[] Stack;
}

template <typename Elem> int StackArray<Elem>::getSize() const
{
    return(t+1);
}

template <typename Elem> bool StackArray<Elem>::isEmpty() const
{
    return (t<0);
}

template <typename Elem>
const Elem& StackArray<Elem>::top(){ //throw(StackEmpty){
//if (isEmpty()) throw StackEmpty("Top of Stack Empty");

return Stack[t];

}

template<typename Elem>
void StackArray<Elem>::push(const Elem& e){ //throw(StackFull){
//if (getsize() == capacity) throw StackFull("Push to Full Stack");
Stack[++t] = e;
}




template<typename Elem>
void StackArray<Elem>::pop(){
if(!isEmpty()){
--t;
}
else{cout<<"Stack is empty!";}
}

template<typename Elem>
void StackArray<Elem>::displayStack(){
if(isEmpty()){
    cout<<"Stack is empty!"<<endl;
}
else{
    for(int i=t; i >=0; --i){
        cout<<Stack[i]<<endl;
    }
}
}

template class StackArray<int>;
template class StackArray<string>;
