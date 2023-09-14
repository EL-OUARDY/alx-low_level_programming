# Variadic functions — ALX Low Level Programming
0x10. C - Variadic functions

### Variadic Functions:
Variadic functions in C are functions that can accept a variable number of arguments. These functions provide a way to pass an arbitrary number of arguments of different types to the function. The standard C library includes several variadic functions, such as printf and scanf.

To declare a variadic function in C, you use an ellipsis (...) as the last parameter in the function's parameter list. Here's the general syntax:
```c
return_type function_name(type fixed_arg1, type fixed_arg2, ..., ...);
```
Exemple:
```c
// a variadic function that can sum n numbers
int sum (int n, ...); 
```
To access the variable arguments within a variadic function, you use the stdarg.h header, which provides a set of macros to handle the variable argument list. The main macros are:

`va_list` A type representing the variable argument list.\
`va_start` A macro that initializes the va_list to point to the first variable argument.\
`va_arg` A macro that retrieves the next argument of a specified type from the va_list.\
`va_end` A macro that cleans up the va_list after you finish using the variable arguments.

Here is an example of how to use these macros to implement the sum() function:

```c
#include <stdio.h>
#include <stdarg.h>

int sum (int n, ...) {

    // initialize the sum
    int total = 0;

    // declare a variable of type va_list
    va_list ap;

    // initialize ap to point to the first variadic argument
    va_start(ap, n); 

    // loop through n times
    for (int i = 0; i < n; i++) {
        // add the next variadic argument to the sum
        total += va_arg(ap, int);
    }

    // end the traversal and clean up
    va_end(ap);

    // return the sum
    return total;
}

// Pilot code
int main () {
    // call sum with 2 arguments
    printf("The sum of 3 and 5 is %d\n", sum(2, 3, 5));
    // call sum with 4 arguments
    printf("The sum of 1, 2, 3, and 4 is %d\n", sum(4, 1, 2, 3, 4));
    return 0;
}

```

> Keep in mind that using variadic functions requires careful handling of the arguments and their types, as there is no type safety or compile-time checks for the variable arguments. Make sure to pass the correct number and types of arguments as expected by the function.

**Twitter:** https://twitter.com/_ELOUARDY \
**Email:** ouadia@elouardy.com
> I Love .md Files!!

