#include <iostream>
#include "CList.h"
#include "CNode.h"

using namespace std;

CList myList;

int main()
{
    myList.add(45);
    myList.add(12);
    myList.add(50);
    myList.display();
    return 0;
}
