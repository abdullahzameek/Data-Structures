#ifndef INTSTACK_H_INCLUDED
#define INTSTACK_H_INCLUDED

class IntStack{
enum {CAPACITY = 100};

public:
    IntStack(int cap);
    ~IntStack();
    int getSize() const;
    bool isEmpty() const;
    const int& getTop() const;
    void push(const int& e);
    void pop();
    void displayStack();

private:
    int* S;
    int capacity;
    int t;
};


#endif // INTSTACK_H_INCLUDED
