#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList()
{
    head = nullptr;
    tail = nullptr;
    sz = 0;
}

SinglyLinkedList::~SinglyLinkedList()
{
    while (head){
        headRemove();
    }
}

void SinglyLinkedList::headRemove(){
    if (head){
        Node* deleteHead = head;
        head = head->next;
        delete deleteHead;
        sz--;
    }
}

void SinglyLinkedList::headInsert(int data){
    if (!head){
        head = new Node();
        head->data = data;
        tail = head;
        tail->next = nullptr;
    }
    else{
        Node* newHead = new Node();
        newHead->data = data;
        newHead->next = head;
        head = newHead;
    }
    sz++;
}

Node* SinglyLinkedList::nextNode(Node* node){
    return node->next;
}

Node* SinglyLinkedList::returnHead(){
    return head;
}

Node* SinglyLinkedList::returnTail(){
    return tail;
}

int SinglyLinkedList::returnSize(){
    return sz;
}

std::ostream& operator << (std::ostream &out, const SinglyLinkedList &l){
    if (l.head){
        for (Node* runner = l.head; runner != l.tail->next; runner = runner->next){
            out << runner->data << " ";
        }
    }

    return out;
}
