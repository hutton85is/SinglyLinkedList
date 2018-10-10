#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include <iostream>

//  Struct containing a node with a pointer to the next node in linked list
struct Node{
    Node* next;
    int data;
};

class SinglyLinkedList
{
    public:
        //  Constructor does not do anything but create a new instance
        SinglyLinkedList();

        //  Destructor will delete the single linked list to prevent memory loss
        virtual ~SinglyLinkedList();

        //  insert new item infront of list
        void headInsert(int data);

        //  Remove and delete first element
        void headRemove();

        //  return next element after 'node'
        Node* nextNode(Node* node);

        //  return pointer to head
        Node* returnHead();

        //  return pointer to tail
        Node* returnTail();

        //  return list size
        int returnSize();

        //  write to console complete list
        friend std::ostream& operator << (std::ostream &out, const SinglyLinkedList &l);

    private:
        Node* head;
        Node* tail;
        int sz;
};

#endif // SINGLYLINKEDLIST_H
