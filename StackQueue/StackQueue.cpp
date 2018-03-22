#include<iostream>
#include "LinkedStack.h"
#include "genNode.h"
#include "genList.h"
#include "StackQueue.h"

void StackQueue::enqueue(const Elem& e){
inputStack.push(e);
}

void StackQueue::dequeue(){
int temp;
if(outputStack.isEmpty()){
    while(!inputStack.isEmpty()){
        temp = inputStack.pop();
        outputStack.push(temp);
    }
}
int i = outputStack.pop();
}

int StackQueue::getSize(){
return inputStack.getSize() + outputStack.getSize();
}

void StackQueue::displayQueue(){
inputStack.displayStack();
outputStack.displayStack();
}
