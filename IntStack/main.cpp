#include <iostream>
#include "IntStack.h"
#include <iostream>

using namespace std;

IntStack A(5);
int main()
{
    A.push(2);
    A.push(3);
    A.push(4);
    A.push(5);
    A.push(47);
    A.push(12);
    A.displayStack();
    cout<<endl;
    A.pop();
    A.push(15);
    A.displayStack();
    return 0;
}
