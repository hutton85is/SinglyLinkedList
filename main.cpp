#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;

int main()
{
    SinglyLinkedList *l = new SinglyLinkedList();
    l->headInsert(1);
    l->headInsert(2);
    l->headInsert(3);
    cout << *l << endl;
    cout << "head: " << l->returnHead()->data << endl;
    cout << "tail: " << l->returnTail()->data << endl;
    l->headRemove();
    cout << *l << endl;
    l->headRemove();
    cout << *l << endl;
    l->headRemove();
    cout << *l << endl;
    cout << "Size: " << l->returnSize() << endl;
    l->headRemove();
    l->headInsert(1);
    l->headInsert(2);
    l->headInsert(3);
    cout << "Size: " << l->returnSize() << endl;
    cout << *l << endl;
    l->headRemove();
    cout << *l << endl;
    l->headRemove();
    cout << *l << endl;
    l->headRemove();
    cout << *l << endl;
    cout << "Size: " << l->returnSize() << endl;
    l->headRemove();
    l->headInsert(1);
    l->headInsert(2);
    cout << "head: " << l->returnHead()->data << endl;
    cout << "tail: " << l->returnTail()->data << endl;
    l->headInsert(3);
    cout << "head: " << l->returnHead()->data << endl;
    cout << "tail: " << l->returnTail()->data << endl;
    cout << "Size: " << l->returnSize() << endl;
    cout << *l << endl;

    return 0;
}
