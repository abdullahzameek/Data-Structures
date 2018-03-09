#include<iostream>
#include<ostream>
#include "Set.h"
using namespace std;

//constructor with parameter for maxSize
Set::Set(const int& arraysz){
    Elems = new int[arraysz];
    maxCard = arraysz;
    actualCard = 0;
}

//constructor with parameter for defaultSize
Set::Set(){
    Elems = new int[DEFAULTSIZE];
    maxCard = DEFAULTSIZE;
    actualCard = 0;
}

//copy constructor
Set::Set(const Set& copySet){
    maxCard = copySet.maxCard;
    actualCard=copySet.actualCard;
    Elems = new int[maxCard];
    for(int i = 0; i<actualCard; ++i){
        Elems[i] = copySet.Elems[i];
    }
}

//assignment operator overloaded for copy constructor
Set& Set::operator= (const Set& copySet){
   maxCard = copySet.maxCard;
    actualCard=copySet.actualCard;
    Elems = new int[maxCard];
    for(int i = 0; i<actualCard; ++i){
        Elems[i] = copySet.Elems[i];
    }
return *this;

}

//destructor
Set::~Set(){
        //cout<<"Destructing set now"<<endl;
        delete[] Elems;

    }

//add elements to the set
void Set::AddElem(const int& newElem){
        Elems[actualCard] = newElem;
        //cout<<"added elem "<<newElem<<endl;
        ++actualCard;

        //cout<<"Actual card is "<<actualCard<<endl;
}

//check if an element is a member of a set
bool Set::isMember(const int& elem)
{
    for(int i = 0; i < actualCard; ++i){
        if(Elems[i] == elem){
            //cout<<"Yep, it's a member!"<<endl;
            return true;
        }
    }
    //cout<<"Nope, not a member!"<<endl;
    return false;
}

//remove elements from the set
void Set::RmvElem(const int& elem){
bool found;
int location;
int temp;
for(int i = 0; i< actualCard; ++i){
    if(Elems[i] == elem){
        found = true;
        location = i;
    }
}
if(found){
    for(int j = location; j< actualCard;j++){
      temp = Elems[j+1];
      Elems[j] = temp;
    }
    actualCard--;
    //cout<<"Deleted"<<endl;
}
else{
    //cout<<"Oops! Element wasn't found!"<<endl;
}

}

//check if two sets are equal
bool Set::isSetEqual(const Set& set2){
bool flag;
if(actualCard == set2.actualCard){
    for(int i = 0; i < set2.actualCard; ++i){
        if(Elems[i] == set2.Elems[i]){
            flag = true;
        }
        else{
            flag = false;
        }
    if (!flag){
        break;
    }
    }
    if(flag){
        cout<<"Yep, the two sets are equal!"<<endl;
        return true;
    }
    else if (!flag){
        cout<<"Nope, the two sets aren't equal!"<<endl;
        return false;
    }
}
else{
    cout<<"Nope,the two sets aren't equal!"<<endl;
    return false;
}
}

//overloaded operator to check if two sets are equal
bool Set::operator==(const Set& set2){
bool flag;
if(actualCard == set2.actualCard){
    for(int i = 0; i < set2.actualCard; ++i){
        if(Elems[i] == set2.Elems[i]){
            flag = true;
        }
        else{
            flag = false;
        }
    if (!flag){
        break;
    }
    }
    if(flag){
        cout<<"Yep, the two sets are equal!"<<endl;
        return true;
    }
    else if (!flag){
        cout<<"Nope, the two sets aren't equal!"<<endl;
        return false;
    }
}
else{
    cout<<"Nope,the two sets aren't equal!"<<endl;
    return false;
}
}

//overloaded operator to check for inequality between 2 sets
bool Set::operator!=(const Set& set2){
bool flag;
if(actualCard == set2.actualCard){
    for(int i = 0; i < set2.actualCard; ++i){
        if(Elems[i] == set2.Elems[i]){
            flag = true;
        }
        else{
            flag = false;
        }
    if (!flag){
        break;
    }
    }
    if(flag){
        cout<<"Yep, the two sets are equal!"<<endl;
        return false;
    }
    else if (!flag){
        cout<<"Nope, the two sets aren't equal!"<<endl;
        return true;
    }
}
else{
    cout<<"Nope,the two sets aren't equal!"<<endl;
    return true;
}
}

//function to print all the elements in set notation
void Set::displaySet(){
    cout<<"{";
    for(int i = 0; i< actualCard; ++i){
    if(i<actualCard-1){
        cout<<Elems[i]<<",";
    }
    else{cout<<Elems[i];}
    }
    cout<<"}";

cout<<endl;

}

//get the intersection of two sets
void Set::getIntersection(Set set2){
int newSize;
if (actualCard < set2.actualCard){
    newSize = actualCard;
}
else{newSize = set2.actualCard;}

Set temp(newSize);
for(int i = 0; i<newSize; i++){
if(isMember(set2.Elems[i])){
    temp.AddElem(set2.Elems[i]);
}
}
temp.displaySet();
cout<<endl;
}

//get the union of the two sets
void Set::getUnion(Set set2){
int newSize2 = actualCard + set2.actualCard;
Set Union(newSize2);

for(int i = 0; i< actualCard; i++){
    Union.AddElem(Elems[i]);
    //Union.displaySet();
}
for(int j = 0; j< set2.actualCard;j++){
    Union.AddElem(set2.Elems[j]);
    //Union.displaySet();
}

for(int k = Union.actualCard-1; k>=0;k--){
    if(isMember(set2.Elems[k])){
        Union.RmvElem(set2.Elems[k]);
        //Union.displaySet();
    }
}


Union.displaySet();
cout<<endl;
}

//overloaded operator to check if an element is a member of a set
bool Set::operator&(const int& elem)
{
    for(int i = 0; i < actualCard; ++i){
        if(Elems[i] == elem){
            cout<<"Yep, it's a member!"<<endl;

            return true;
        }
    }
    cout<<"Nope, not a member!"<<endl;
    return false;
}

//overloaded operator to get intersection between 2 sets
Set operator*(Set& set1, Set& set2){
 set1.getIntersection(set2);
}

//overloaded operator to get union between 2 sets
Set operator+(Set& set1, Set& set2){
 set1.getUnion(set2);
}

//overloaded operator to get difference between 2 sets
Set operator-(Set& set1, Set& set2){
Set diffSet(set1.actualCard+set2.actualCard);


for(int i = 0; i< set1.actualCard; i++){
    diffSet.AddElem(set1.Elems[i]);
    //Union.displaySet();
}
for(int j = 0; j< set2.actualCard;j++){
    diffSet.AddElem(set2.Elems[j]);
    //Union.displaySet();
}

for(int k = diffSet.actualCard-1; k>=0;k--){
    if(set1.isMember(set2.Elems[k])){
        diffSet.RmvElem(set2.Elems[k]);
        //Union.displaySet();
    }
}
for(int i = 0; i<(set1.actualCard + set2.actualCard); i++){
if(set1.isMember(set2.Elems[i])){
    diffSet.RmvElem(set2.Elems[i]);
}
}
diffSet.displaySet();
cout<<endl;
}

//check if one subset
Set operator<=(Set& set1, Set& set2){
int compSize;
if (set1.actualCard < set2.actualCard){
    compSize = set1.actualCard;
}
else{compSize = set2.actualCard;}

bool match;
for(int i =0; i< compSize; ++i){
    if(set1.isMember(set2.Elems[i])){
            match = true;
    }
    else{match = false;}
}
if(match){
    cout<<"Yep,it's a subset"<<endl;
    }
else {
    cout<<"Nope, not a subset"<<endl;
    }
}

//overload << operator to print the contents of the set
std::ostream& operator<< (std::ostream &out, const Set& set1)
{
    out<<"{";
    for(int i = 0; i< set1.actualCard; ++i){
    if(i<set1.actualCard-1){
        out<<set1.Elems[i]<<",";
    }
    else{out<<set1.Elems[i];}
    }
    out<<"}";

cout<<endl;
    return out;
}

//overload >> operator to input an element into the set
std::istream& operator>> (std::istream &in, Set& set1)
{
    std::cout<<"Enter a number"<<endl;
    int e;
    in>>e;
    set1.AddElem(e);

   return in;
}



