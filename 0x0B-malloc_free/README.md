# Dynamic memory allocation — ALX

Dynamic memory allocation in the C programming language allows you to allocate memory at runtime, as opposed to static memory allocation, where memory is allocated at compile time. This provides flexibility in managing memory resources and is essential for dealing with data structures like linked lists, trees, and dynamic arrays, where the size of the data structure may change during program execution.

### Malloc Function:
The malloc() function is used to dynamically allocate memory at runtime.
It stands for "memory allocation"
malloc allows you to request a specific amount of memory from the operating system's heap and returns a pointer to the allocated memory block.
You should always `free` all `malloc`'ed memory spaces.

Exemple:
```c
int *dynamicArray = (int *)malloc(5 * sizeof(int));
if (dynamicArray == NULL) {
	// Handle allocation failure
}
```

### Free Function:
After allocating the memory, the program accesses and modifies the allocated memory block.
Finally, the free function is used to release the dynamically allocated memory, preventing memory leaks.
Speaking of memory leaks, `valgrind` is great tool to check for unwanted memory leaks.

Exemple:
```c
// Deallocate the memory when done
free(dynamicArray);
```

## Contact Me
**Twitter:** https://twitter.com/_ELOUARDY
**Email:** ouadia@el-ouardy.com

> I Love .md Files!!

