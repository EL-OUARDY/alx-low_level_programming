# Alx Low Level Programming
C - argc, argv

`argc` and `argv` are commonly used parameters in the main function to handle command-line arguments when running a program. They allow you to pass information to your program when you execute it from the command line.

### Argc:
stands for "argument count" and is an integer that represents the number of command-line arguments passed to the program, including the name of the program itself

### Argv[]:
argv stands for "argument vector" and is an array of strings (character pointers) that holds the actual command-line arguments passed to the program. Each element of the argv array represents a command-line argument, with argv[0] typically being the name of the program itself.

## Exemple:
```c
#include <stdio.h>

int main(int argc, char* argv[]) {
	// Check the number of arguments with argc
	printf("Number of arguments: %d\n", argc);

	// loop over passed arguments and get value using argv
	for (int i = 0; i < argc; i++) {
		printf("Argument %d: %s\n", i, argv[i]);
	}

	return 0;
}
```

Run the progran and pass parameters as follow:

```bash
./my_program arg1 arg2 arg3
```

It will produce the following output:

```yaml
Number of arguments: 4
Argument 0: ./my_program
Argument 1: arg1
Argument 2: arg2
Argument 3: arg3
```

Note: argc is 4 because there are four command-line arguments (including the program name), and argv is an array containing those arguments as strings. You can then access and manipulate these arguments as needed in your program.

## Contact Me
**Twitter:** https://twitter.com/_ELOUARDY

**Email:** ouadia@el-ouardy.com

> I Love .md Files!!

