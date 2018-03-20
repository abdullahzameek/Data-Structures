#include <iostream>
#include "TemplatedStack.h"
using namespace std;

template<class T> class StackArray;
StackArray<string> a;
StackArray<int> myStack;
int main()
{
    myStack.push(5);
    myStack.push(10);
    myStack.push(15);
    myStack.push(20);
    myStack.displayStack();
    cout<<endl;
    myStack.pop();
    myStack.push(99);
    myStack.displayStack();
    cout<<endl;
    a.push("ABC");
    a.push("DEF");
    a.displayStack();
    return 0;
}
