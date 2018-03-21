#include <iostream>
#include "CList.h"
#include "CNode.h"

using namespace std;
template <class T> class CList;

CList<int> myList;
CList<string> a;
int main()
{
    myList.add(45);
    myList.add(12);
    myList.add(50);
    //myList.removeElem();
    //myList.removeElem();
    myList.display();
    cout<<endl;

    a.add("Hi");
    a.add("Bye");
    a.display();
    return 0;
}
