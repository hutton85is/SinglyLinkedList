# SinglyLinkedList

This is a Singly linked list class that has the following properties:

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
