#ifndef LINKED_LIST_H
#define LINKED_LIST_H


// We are defining the function definitions of the linked list class
class LinkedList{
    public:
        // Big four and other methods

        LinkedList(); // Constructor
        ~LinkedList(); // Destructor
        LinkedList(const LinkedList &other); // Copy Constructor
        void append(int x);

        LinkedList &operator=(const LinkedList &other); // Copy Assignment

        void print();
        // Comparison Operators
        
        bool operator==(LinkedList &other) const;
        bool operator!=(LinkedList &other) const;

    private:
        // node fields go here
        struct node{
            int info;
            node *next
        };
    node *head;
    node *tail;
};


#endif
 