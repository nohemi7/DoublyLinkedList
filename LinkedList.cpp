#include "LinkedList.h"
#include <iostream>

using namespace std;

// Implemment Constructor
LinkedList::LinkedList() : head(nullptr), tail(nullptr) {}

// Implement Destructor
LinkedList::~LinkedList() {
    // keep a temporary pointer
    node *temp = head;
    // Iterate through the Linked List
    while(temp != nullptr)
    {
        // point temp to next
        temp = temp->next;
        delete head;
        head = temp;
    }
}

// Implement Copy Constructor
LinkedList::LinkedList(const LinkedList &other) {
    //itterate through list and copy values
    node* temp = other.head;
    while(temp != nullptr) {
        this->append(temp->info);
        temp = temp->next;
    }
}

// Implement Append
void LinkedList::append(int x) {
    // make a new node on the heap and allocate vals
    node *n = new node;
    n->info = x;
    n->next = nullptr;
    
    // add it to the end of list
    if(head == nullptr && tail == nullptr) {
        head = n;
        tail = n;
    }
    else {
        tail->next = n;
        tail = n;
    }
}

// Implement overloaded ==
bool LinkedList::operator==(const LinkedList &other) const {
    // init tracking pointers
    node *n1 = head;
    node *n2 = other.head;

    // Itterate through both lists
    while(n1 != nullptr && n2 != nullptr) {
        // Check if values are not same
        if(n1->info != n2->info) return false;

        // Advance pointers
        n1 = n1->next;
        n2 = n2->next;
    }
    // if itterate through both list and they are both nullptr then list must be same
    if(n1 == nullptr && n2 == nullptr) return true;
    else return false;
}

bool LinkedList::operator!=(const LinkedList &other) const {
    return !(*this  == other);
}

// Implement Copy Assignment
LinkedList& LinkedList::operator=(const LinkedList &other) {
    // delete nodes on current list
    node *temp = head;
    while(temp != nullptr) {
        temp = temp->next;
        delete head;
        head = temp;
    }
    // apend new values onto this list
    node *n1 = other.head;
    while(n1 != nullptr) {
        this->append(n1->info);
        n1 = n1->next;
    }
}

// Implement Linked List
void LinkedList::print() {
    // Itterate through list
    node *temp = head;
    while(temp != nullptr) {
        cout << temp->info << ", ";
        temp = temp->next;
    }
    cout << endl;
}