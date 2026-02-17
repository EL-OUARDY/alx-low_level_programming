# Alx Low Level Programming

C - Static libraries

## Static libraries:

Static libraries are collections of precompiled object files that can be linked with C programs.
They provide a way to organize and reuse commonly used code across multiple projects.
The code contained within a static library is linked into the program at compile time, resulting in a standalone executable.

# How to Create And Use Static Libraries

`Compile Source Files:` Use a C compiler (gcc) to compile the source files (.c) into object files (.o).

```bash
gcc -c source_file.c -o object_file.o
```

`Create the Static Library:` Use the `ar` (archive) command to create a static library from the object files. The basic syntax is:

```bash
ar rcs libmylibrary.a object_file1.o object_file2.o
```

The 'c' flag tells ar to create the library if it doesn't already exist. The 'r' flag tells it to replace older object files in the library, with the new object files.

`Using the Static Library:` To use the static library in a C program, we need to link it during compilation:

```bash
gcc my_program.c -o my_program -L/path/to/library -lmylibrary
```

The `-L` flag tells the linker that libraries might be found in the given directory.

Note that we omitted the "lib" prefix and the ".a" suffix when mentioning the library on the link command. The linker attaches these parts back to the name of the library to create a name of a file to look for.

## Useful commands

`ranlib` generate an index, or table of contents, for an archive library (typically a static library) in Unix-like operating systems. The index provides quick access to the individual object files within the library. The purpose of this index is to improve the efficiency of the linker when it needs to search for and extract specific object files from the library during the linking process.

```bash
ranlib mylibrary.a
```

`nm` used to display information about the symbols (e.g., functions, variables) contained within object files, executable files, and shared libraries. It is a helpful tool for inspecting and understanding the symbol tables of compiled binary files.

```bash
nm my_program
```

Here's how `nm` works in details:

- `Viewing Symbol Information:` When you run nm on an object file, executable file, or shared library, it provides a list of symbols present in that file. These symbols include functions, global variables, and other program elements defined in the code.

- `Symbol Types:` nm categorizes symbols into different types, typically using single-letter codes, such as:
  U: Undefined symbol (references to external functions or variables).
  T: Text (code) symbol.
  D: Data (initialized global variable) symbol.
  B: BSS (uninitialized global variable) symbol.
  C: Common symbol (multiple definitions of the same global variable).
  W: Weak symbol.
  A: Absolute symbol (value is an absolute address).
  I: Indirect symbol (used for shared libraries).
  V: Weak undefined symbol.

- `Symbol Names and Addresses:` For each symbol, nm provides its name and memory address (in hexadecimal). You can see whether a symbol is defined or referenced and where it's located in the binary file's memory.

### Static libraries Drawbacks:

Static libraries offer several benefits, but they also come with some drawbacks:

- Bigger Executables: When linking a static library(s) to a program, it includes all the library code that used in the executable. This can make the executable larger.

- No Updates Without Recompilation: If we want to update a part of the static library (for example, fixing a bug or adding a new feature), we need to recompile all the programs that use it. This can be impractical for large projects or when distributing software to end-users.

- Slower Build Times: If a project includes many large static libraries, it can significantly increase the build time since all the library code must be compiled into the program every time we build it.

## Contact Me

**Twitter:** https://twitter.com/_ELOUARDY

**Email:** contact@wadi3.codes

> I Love .md Files!!
