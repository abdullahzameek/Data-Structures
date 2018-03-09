#ifndef SET_H_INCLUDED
#define SET_H_INCLUDED
#include <iostream>
#include <ostream>
using namespace std;
const int DEFAULTSIZE = 100;

class Set{
private:
    int maxCard; //maximum possible size of set
    int actualCard; //actual set of set
    int*Elems; //size to be input



public:
    Set(const int& arraysz); //constructor with parameter
    Set(); //default constructor
    Set(const Set& copySet); //copy constructor
    Set& operator=(const Set& copySet); //assignment overload operator as a copy constructor as a member function
    bool operator==(const Set& set2); //check if two sets are equal using overloaded operator as a member function
    bool operator!=(const Set& set2); //check if two sets are in equal using overloaded operator as a member function
    bool operator&(const int& elem); //check if the given element is a member of the set using overloaded operator as a member function
    ~Set(); //destructor
    void AddElem(const int& newElem); //add element to the set
    void RmvElem(const int& delElem); //remove element from set
    bool isMember(const int& elem); //check if an element if a member of the set
    bool isSetEqual(const Set& set2); //check if two sets are equal
    void getIntersection(Set set2); //get intersection between two sets
    void getUnion(Set set2); //get union between two sets
    void displaySet(); //display set

friend Set operator*(Set& set1, Set& set2); //get intersection using friend function with overloaded operator
friend Set operator+(Set& set1, Set& set2); //get union using friend function with overloaded operator
friend Set operator-(Set& set1, Set& set2); //get set difference using friend function with overloaded operator
friend Set operator<=(Set& set1, Set& set2); // check for subset
friend std::ostream& operator << (std::ostream &out, const Set&set1); //overload output operator
friend std::istream& operator >> (std::istream &in, Set& set1); //overload input operator

};


#endif // SET_H_INCLUDED
