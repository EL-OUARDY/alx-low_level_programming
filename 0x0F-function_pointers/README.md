# Function pointers — Alx Low Level Programming
0x0F. C - Function pointers
### What Are Function pointers:
A function pointer in C programming is a variable that stores the address of a function and allows you to invoke it indirectly through the variable. This feature is especially handy when you want to use functions as parameters for other functions or store them in data structures like arrays or linked lists. \
To use pointers to functions in C, follow these steps:

**1- Declare a function prototype:**
Before declaring a pointer to a function, you need to have a prototype for the function you want to point to. This is necessary because the pointer needs to know the function's signature (return type and parameter types) to ensure type safety.
```c
// Function prototype
returnType functionName(parameterType1 arg1, parameterType2 arg2, ...);
```

**2- Declare a pointer to the function:**
The syntax to declare a pointer to a function is as follows:
```c
returnType (*functionPointerName)(parameterType1, parameterType2, ...);
```

Note that if you don't parenthesize the name, you just declare a function returning a pointer!
```c
/* function returning pointer to int */
int *func(int a, float b); // ❌

/* pointer to function returning int */
int (*func)(int a, float b); // ✅
```

**3- Assign the function's address to the pointer:**
You can assign the address of a function to the pointer as follows:
```c
functionPointerName = &functionName;
// OR simply
functionPointerName = functionName;
```

**4- Call the function through the pointer:**
To call the function indirectly using the pointer, use the following syntax:
```c
returnType result = (*functionPointerName)(arg1, arg2, ...);
// OR simply
returnType result = functionPointerName(arg1, arg2, ...);
```

> Remember that when using function pointers, the function signatures (return type and parameter types) must match, otherwise, the behavior is undefined.

**Twitter:** https://twitter.com/_ELOUARDY  
**Email:** ouadia@elouardy.com

> I Love .md Files!!

