# Singly linked lists — Alx Low Level Programming
0x13. C - More singly linked lists

## Definition

A Singly Linked List is a linear data structure consisting of a sequence of elements called nodes. Each node contains two components: data, which stores the value of the element, and a reference (or link) to the next node in the sequence. The last node's reference points to `null`, indicating the end of the list. Unlike arrays, Singly Linked Lists do not require contiguous memory allocation, making them more flexible in terms of insertion and deletion operations.

## Other Types

Singly Linked Lists are a type of linked list data structure. Linked lists can be classified into three main types:
1. Singly Linked List: Each node points only to the next node in the sequence.
2. Doubly Linked List: Each node points to both the next and the previous nodes in the sequence, allowing for more efficient traversal in both directions.
3. Circular Linked List: The last node points back to the first node, forming a circular structure.

> For this README, we will focus on Singly Linked Lists.

## How to use?
```c
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a singly linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Create nodes
    struct Node* head = createNode(1);
    struct Node* second = createNode(2);
    struct Node* third = createNode(3);

    // Link nodes
    head->next = second;
    second->next = third;

    // Traverse and print the linked list
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Don't forget to free memory when done
    free(head);
    free(second);
    free(third);

    return 0;
}
```
The code above creates a singly linked list with three nodes and traverse through the list to print its elements.

## Use and benefits

### Use Cases:

1. Dynamic Data Storage: Singly Linked Lists are suitable for storing data that may vary in size dynamically, as memory can be allocated and deallocated as needed.
2. Task Management: Singly Linked Lists are used in task management systems to maintain lists of tasks that can be easily added or removed.
3. Implementing Stacks and Queues: Singly Linked Lists can serve as the underlying data structure for implementing stacks (Last In, First Out) and queues (First In, First Out).

### Benefits:

1. Dynamic Size: Unlike arrays, Singly Linked Lists can grow or shrink dynamically without the need for resizing operations, making them more efficient for insertions and deletions.
2. Memory Efficiency: Linked lists use memory only for the data and the next node's reference, making them efficient for data structures with varying sizes.
3. Constant-time Insertions and Deletions: Inserting or deleting an element at the beginning of the list takes constant time (O(1)) if the head reference is available.
4. No Memory Wastage: Singly Linked Lists can efficiently use memory without wasting space, even if elements are removed or added frequently.

Overall, Singly Linked Lists provide a balance between dynamic memory allocation and efficient insertions and deletions, making them valuable in situations where flexibility and performance are important. However, it's essential to note that accessing elements in the middle of the list requires traversing the list from the beginning, which can be less efficient compared to direct access in arrays. Hence, the choice of data structure should depend on the specific requirements of the application.

**Twitter:** https://twitter.com/_ELOUARDY \
**Email:** ouadia@elouardy.com

> I Love .md Files!!

