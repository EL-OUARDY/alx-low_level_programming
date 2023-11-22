# Doubly linked lists — Alx Low Level Programming
0x17. C - Doubly linked lists

## What is a Doubly Linked List?
A doubly linked list is a linear data structure consisting of nodes where each node has a pointer to the next and previous nodes. It offers flexibility and efficient operations compared to other data structures. \
It is like a train where each carriage (node) contains cargo (data) and pointers to the carriages in front and behind it. This bidirectional nature allows traversal in both directions, making operations like insertion and deletion more versatile.

## Singly linked lists VS Doubly linked lists
`Singly linked lists` allow forward traversal with nodes pointing to the next element, optimizing memory and excelling in start-based operations. \
`Doubly linked lists` expand functionality of singly linked lists with bidirectional connections, facilitating efficient insertion/deletion at any position but consuming more memory due to additional pointers.

## How to Use Doubly Linked Lists
Using a doubly linked list in your C programs involves:

`Defining a Node Structure`: Create a structure defining the node with data and pointers to the next and previous nodes.
```c
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
```

`Initializing and Manipulating the List`: Start by creating a head pointer and managing operations like insertion, deletion, traversal, and searching.
```c
// Insertion example
void insertNode(struct Node** head_ref, int new_data) {
    // Create a new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    // Update previous of head node to new node
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    // Move the head to point to the new node
    (*head_ref) = new_node;
}
```

## Operations with Doubly Linked Lists
`Deletion`: Deleting a node involves adjusting pointers and freeing memory.

`Insertion`: Inserting a node requires updating pointers to link the new node appropriately.

`Traversal`: Traversal means moving through the list from start to end or vice versa using the pointers.

`Other Operations`: Other operations like searching for a specific element or reversing the list enhance the list's functionality.

## Conclusion
This is a brief introduction to doubly linked lists in C. This project is aims to dive deeper into their implementation and explore the versatility they offer in handling data structures! 🌟

## Contact Me
**Twitter:** https://twitter.com/_ELOUARDY \
**Email:** ouadia@elouardy.com
