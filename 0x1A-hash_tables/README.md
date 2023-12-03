# Hash tables — Alx Low Level Programming
0x1A. C - Hash tables

## Introduction to HashTable Data Structure
`Hash tables` are a data structure used to store key-value pairs, providing efficient insertion, deletion, and lookup operations. \
Hash tables utilize arrays to store data. They use a **hash function** to compute an index where an element can be found or stored.

## Why Hash Tables and Not Arrays
Hash tables offer faster average-case performance for operations compared to arrays, especially for search, insertion, and deletion.

## Hash Function
A `Hash Function` takes an input (or 'key') and returns an index to map the key to a specific location in the hash table.

### What Makes a Good Hash Function?
A good hash function distributes keys uniformly across the hash table, reducing **collisions** and providing efficient access to data.

## Dealing with Collisions in Hash Tables
`Collisions` occur when two keys hash to the same index. common methods to handle collisions include **chaining** (using linked lists) or **open addressing** (probing for an alternative slot).

## Advantages and Drawbacks of Hash Tables
**Advantages:**
- Fast data retrieval
- Efficient insertion and deletion
- Ideal for associative arrays *(Dictionaries)*

**Drawbacks:**
- Increased memory usage due to potential collisions
- Overhead from the hash function

## Common Use Cases of Hash Tables
- Implementing associative arrays *(Dictionaries)*
- Storing data in databases for quick retrieval
- Caching mechanisms in various applications
- ...

### Code Example (in C):
This C code demonstrates a basic hash table using separate chaining to handle collisions. the hash function can be optimized or modified to suit a specific need.
```c
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct Node {
    int key;
    int value;
    struct Node* next;
};

struct Node* hash_table[SIZE];

int hash_function(int key) {
    return key % SIZE;
}

void insert(int key, int value) {
    int index = hash_function(key);

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->key = key;
    new_node->value = value;
    new_node->next = NULL;

    if (hash_table[index] == NULL) {
        hash_table[index] = new_node;
    } else {
        struct Node* temp = hash_table[index];
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

int search(int key) {
    int index = hash_function(key);
    struct Node* temp = hash_table[index];

    while (temp != NULL) {
        if (temp->key == key) {
            return temp->value;
        }
        temp = temp->next;
    }

    return -1; // Not found
}

int main() {
    // Usage example
    insert(5, 10);
    insert(15, 20);
    
    printf("Value for key 5: %d\n", search(5)); // Output: Value for key 5: 10
    printf("Value for key 15: %d\n", search(15)); // Output: Value for key 15: 20
    printf("Value for key 7: %d\n", search(7)); // Output: Value for key 7: -1 (Not found)

    return 0;
}
```

## Conclusion:
Hash tables are speedy and efficient for storing and retrieving key-value pairs. They excel in rapid operations like insertion, deletion, and lookup. Despite potential collisions, they remain a top choice for quick data access and storage based on keys, making them fundamental in various applications.

## Contact Me
**Twitter:** https://twitter.com/_ELOUARDY \
**Email:** ouadia@elouardy.com
