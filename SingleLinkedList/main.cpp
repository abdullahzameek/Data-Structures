#include <iostream>
#include "intList.h"
#include "intNode.h"

using namespace std;

intList myl;
int main()
{

    myl.addFront(5);
    myl.display();
    myl.addMiddleFront(8,5);
    myl.addMiddleFront(10,8);
    myl.addMiddleBefore(9,8);
    myl.addMiddleFront(58,15);
    myl.removeFront();
    myl.display();
    myl.removeNode(8);
    myl.addRear(45);
    myl.addRear(78);
    myl.addMiddleBefore(14,78);
    myl.display();
    return 0;
}
