#include <iostream>
#include "DLL.h"

using namespace std;

NodeList a;
int main()
{
    a.insertFront(55);
    NodeList::Iterator p = a.beginI();
    a.insertFront(44);
    a.insertBack(45);
    a.insertFront(11);
    a.insertBack(20);
    a.display();
    return 0;
}
