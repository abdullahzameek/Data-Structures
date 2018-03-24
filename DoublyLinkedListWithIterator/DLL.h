#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED
typedef int Elem;
class NodeList{
private:
    struct Node{
    Elem elem;
    Node* next;
    Node* prev;
    };

public:
    class Iterator{
    public:
        Elem& operator*();
        bool operator==(const Iterator& p) const;
        bool operator!=(const Iterator& p) const;
        Iterator& operator++();
        Iterator& operator--();
        friend class NodeList;
    private:
        Node* v;
        Iterator(Node* u);
    };

public:
    NodeList();
    int getSize() const;
    bool isEmpty() const;
    Iterator beginI() const;
    Iterator endI() const;
    void insertFront(const Elem& e);
    void insertBack(const Elem& e);
    void insertGen(const Iterator& p, const Elem& e);
    void eraseFront();
    void eraseBack();
    void eraseGen(const Iterator& p);
    void display();

private:
    int n;
    Node* header;
    Node* trailer;
};


#endif // DLL_H_INCLUDED
