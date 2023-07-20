# Alx Low Level Programming
0x0F. C - Function pointers
### Variadic Functions:
In C programming, you can use pointers to functions, which allow you to store the address of a function and call it indirectly through the pointer. This feature is particularly useful when you want to pass functions as arguments to other functions or store them in data structures like arrays or linked lists. To use pointers to functions in C, follow these steps:

**1- Declare a function prototype:**
Before declaring a pointer to a function, you need to have a prototype for the function you want to point to. This is necessary because the pointer needs to know the function's signature (return type and parameter types) to ensure type safety.
```c
// Function prototype
returnType functionName(parameterType1 arg1, parameterType2 arg2, ...);
```

**Declare a pointer to the function:**
The syntax to declare a pointer to a function is as follows:
```c
returnType (*functionPointerName)(parameterType1, parameterType2, ...);
```

**Assign the function's address to the pointer:**
You can assign the address of a function to the pointer as follows:
```c
functionPointerName = &functionName;
// OR simply
functionPointerName = functionName;
```

**Call the function through the pointer:**
To call the function indirectly using the pointer, use the following syntax:
```c
returnType result = (*functionPointerName)(arg1, arg2, ...);
// OR simply
returnType result = functionPointerName(arg1, arg2, ...);
```

> Remember that when using function pointers, the function signatures (return type and parameter types) must match, otherwise, the behavior is undefined.

**Twitter:** https://twitter.com/_ELOUARDY \
**Email:** ouadia@el-ouardy.com

> I Love .md Files!!
