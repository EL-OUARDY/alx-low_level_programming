# Structures, typedef — Alx Low Level Programming
0x0E. C - Structures, typedef

### Structures:
structures are used to group together different data types under a single name. They allow you to create user-defined data types, known as `structs` that can hold multiple related pieces of data. Each piece of data within a structure is called a "member" or "field."

*Exemple:*\
A struct to store information about a point in a two-dimensional plane, such as x and y coordinates.
```c
struct Point {
    int x;
    int y;
};
```

### Typedef:
In C, `typedef` is a reserved keyword used to create new names for existing data types. It allows you to define new type names that make the code more readable and easier to maintain. With typedef, you can give a new name to a type, including built-in data types or user-defined structures.
The primary benefit of typedef is to make the code more expressive and to make it easier to modify the underlying data type if needed. It is particularly useful when dealing with complex data structures or when you want to create more descriptive names for primitive data types.
> One of the most common use cases for typedef is with structures. Instead of having to use struct keyword every time you declare a variable of a particular structure type, you can use typedef to create an alias for the struct

The code below shows how stuct/typdef works

```c
// Define a struct type named Person with three members: name, age, and gender
struct Person {
    char* name;
    int age;
    char gender;
};

// Use typedef to create an alias for struct Person called Human
typedef struct Person Human;

// Declare and initialize a variable of type Human
Human h = {"EL-OUARDY", 26, 'M'};

// Print the values of the members of h
printf("Name: %s\n", h.name);
printf("Age: %d\n", h.age);
printf("Gender: %c\n", h.gender);

```

**Twitter:** https://twitter.com/_ELOUARDY  
**Email:** ouadia@el-ouardy.com

> I Love .md Files!!

