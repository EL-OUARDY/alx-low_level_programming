# Makefiles — Alx Low Level Programming
0x1C. C - Makefiles

## Introduction
`Make` is a build automation tool that automatically builds executable programs and libraries from source code by reading files called **Makefiles**.

A `Makefile` contains a set of directives and rules specifying how to compile and link the source code files to generate the desired output.

## When, why, and how to use Makefiles?
Use Makefiles when you have a project with multiple source files that need to be compiled and linked together. Makefiles help automate the build process, ensuring that only the necessary files are recompiled when changes are made, which speeds up development and reduces errors.

To use Makefiles, create a file named **Makefile** (or makefile) in your project directory and define the rules and commands for building your project.

## What are rules and how to set and use them?
Rules in Makefiles specify how to build target files from source files. Each rule consists of a **target**, **prerequisites** (dependencies), and a **recipe** (commands to build the target).

```make
target: prerequisites
    recipe
```

For example:

```make
my_program: main.o utils.o
    gcc -o my_program main.o utils.o
```


## What are explicit and implicit rules?
- ***Explicit rules*** are rules explicitly defined in the Makefile, like the example shown above.

- ***Implicit rules*** are predefined rules provided by Make for common operations, such as compiling C source files into object files.

## What are the most common/useful rules?
Some common rules in Makefiles include:

- **all**: Builds the entire project.
- **clean**: Removes all generated files.
- **install**: Installs the built files to the system.
- **uninstall**: Removes the installed files from the system.

## What are variables and how to set and use them?
Variables in Makefiles are used to store values that can be reused throughout the Makefile. They can store compiler flags, file paths, or any other values.

Variables are defined using the syntax ***variable_name = value*** or ***variable_name := value***

```make
CC = gcc
CFLAGS = -Wall -O2

my_program: main.o utils.o
    $(CC) $(CFLAGS) -o my_program main.o utils.o
```

Variables can also be set on the command line when invoking make, allowing for customization without modifying the Makefile itself:

```sh
make CC=clang
```


## Contact Me
**Twitter:** https://twitter.com/_ELOUARDY \
**Email:** ouadia@elouardy.com
