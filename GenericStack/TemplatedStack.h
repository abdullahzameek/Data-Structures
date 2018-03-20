#ifndef TEMPLATEDSTACK_H_INCLUDED
#define TEMPLATEDSTACK_H_INCLUDED
template <typename Elem>
class StackArray{
    enum{CAP = 100};

public:
    StackArray(int cap = CAP);
    ~StackArray();
    bool isEmpty() const;
    int getSize() const;
    const Elem& top();
    void push(const Elem& e);
    void pop();
    void displayStack();
    //void display();

private:
    Elem* Stack;
    int capacity;
    int t;

};

#endif // TEMPLATEDSTACK_H_INCLUDED
/*
class StackEmpty:public RuntimeException{
public:
    StackEmpty(const string& err): RuntimeException(err){}

    friend class StackArray;
};
*/
