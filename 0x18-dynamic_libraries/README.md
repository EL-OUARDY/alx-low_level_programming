# Dynamic libraries — Alx Low Level Programming
0x18. C - Dynamic libraries

## What is a Dynamic Library?
A `dynamic library`, or shared library, is a compiled collection of code and data that can be loaded at **runtime** by programs. Unlike static libraries, dynamic libraries are linked at runtime, providing flexibility and efficiency. They enhance code modularity and enable the sharing of common functionalities among multiple programs.

### How does it work?
Dynamic libraries are loaded into memory when a program starts or during execution. This on-demand loading allows for more efficient use of system resources and facilitates updates without recompiling the entire program.

## Creating and Using Dynamic Libraries
To create a dynamic library, compile your code with the -shared option. For example:
```shell
gcc -shared -o mylibrary.so mycode.c
```
To use a dynamic library during compilation, include the library using the -l flag:

```shell
gcc -o myprogram myprogram.c -lmylibrary
```
At runtime, ensure the library is in the system's library path or use $LD_LIBRARY_PATH.

## $LD_LIBRARY_PATH
The *$LD_LIBRARY_PATH* environment variable specifies directories to search for shared libraries. Set it to include the directory containing your dynamic libraries:
```bash
export LD_LIBRARY_PATH=/path/to/your/libraries:$LD_LIBRARY_PATH
```
This ensures that your programs can find and load the required libraries.

## Differences Between Static and Shared Libraries
Static libraries (\*.a files) are linked at compile-time, resulting in larger executables. In contrast, dynamic libraries (\*.so files) are linked at runtime, leading to smaller, more flexible executables.

## Basic Usage Tools
`nm`: List symbols from object files or shared libraries.`
```bash
nm mylibrary.so
```
`ldd`: Display shared library dependencies.
```bash
ldd myprogram
```
`ldconfig`: Update the system's cache of shared library locations.
```bash
sudo ldconfig
```

## Libraries on operating systems
### Static Library
- Windows `.lib` *(Library)*
- Linux `.a` *(Archive)*
### Dynamic Library
- Windows `.dll` *(Dynamic link library)*
- Linux `.so` *(Shared object)*

## Conclusion
Dynamic libraries in C make your code modular, efficient, and reusable. Knowing how to create them, use them, and use tools like ***nm*** and ***ldd*** is crucial for maximizing their benefits. \
Happy coding! 🚀

## Contact Me
**Twitter:** https://twitter.com/_ELOUARDY \
**Email:** ouadia@elouardy.com
