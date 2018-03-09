#include <iostream>
#include "Set.h"
using namespace std;

int main()
{
   //create 2 sets
   Set mySet(5);
   Set mySet2(3);

   //test AddElem
   mySet.AddElem(1);
   mySet.AddElem(2);
   mySet.AddElem(3);

   mySet2.AddElem(5);
   mySet2.AddElem(7);

   //test for intersection
   cout<<"The intersection is : ";
   mySet.getIntersection(mySet2);

   //test for union
   cout<<"The union is : ";
   mySet.getUnion(mySet2);


   //check isMember
   if(mySet.isMember(5)){
    cout<<"Yep, it's a member"<<endl;
   }
    else{cout<<"Nope, not a member"<<endl;;}


    //check isSetEqual
    mySet.isSetEqual(mySet2);

    //display all sets
    mySet.displaySet();
    mySet2.displaySet();

    //copy constructor with constructor initialization
    Set mySet3(mySet);
    mySet3.AddElem(10);
    mySet3.AddElem(12);

    //copy constructor with initializer
    Set mySet4 = mySet2;
    mySet4.AddElem(14);

    //check equality with overloaded operator
    mySet4 == mySet;

    //check for inequality with an overloaded operator
    mySet != mySet3;

    //check if an element is in a set
    mySet&5;

    //check for intersection with an overloaded operator
    mySet*mySet4;

    //check for union with an overloaded operator
    mySet3+mySet4;

    //check for difference with an overloaded operator
    mySet*mySet4;

    //check if  a given set is a subset of another set
    mySet3 <= mySet;

    //check overloaded display operator
    cout<<mySet4;

    //check overloaded entry operator
    cin>>mySet4;
    cout<<mySet4;


cout<<"Assignment completed, all assigned tasks done"<<endl;
   return 0;
}
