# File I/O — Alx Low Level Programming
C - File I/O

## Introduction
File Input/Output (I/O) is a crucial aspect of C programming. With C's file I/O functions, you can read data from files, write data to files, and manipulate them efficiently. Whether you're dealing with text files, binary data, or configuration files, mastering file I/O in C is essential for various programming tasks. In this project, we'll explore how to work with files using C's file I/O functions to achieve a wide range of functionality.

### POSIX File Descriptors
File descriptors are small non-negative integers that represent open files or other I/O resources. They are essential for input and output operations in C.

- **0 (STDIN_FILENO)** represents standard input (keyboard).
- **1 (STDOUT_FILENO)** represents standard output (console).
- **2 (STDERR_FILENO)** represents standard error (console).

### System Calls Functions
``open()`` The open system call is used to open files or create them if they don't exist. It returns a file descriptor, which is a unique integer representing the opened file. Example:

```c
#include <fcntl.h>

int fd = open("example.txt", O_CREAT | O_WRONLY, 0644);
```

``read()`` read is used to read data from a file into a buffer. Example:
```c
#include <unistd.h>

char buffer[1024];
ssize_t bytes_read = read(fd, buffer, sizeof(buffer));
```

``write()`` is used to write data from a buffer to a file. Example:
```c
#include <unistd.h>

char buffer[1024];
ssize_t bytes_written = write(fd, buffer, bytes_read);
```

``close()`` used to close a file descriptor, releasing any associated resources. Example:
```c
#include <unistd.h>

int result = close(fd); // Close the file descriptor 'fd'
```

### File Opening Flags
File opening flags are used with the open system call to specify how a file should be opened. Some common flags include:

- **O_RDONLY**: Open the file in read-only mode.
- **O_WRONLY**: Open the file in write-only mode.
- **O_RDWR**: Open the file in read-write mode.
- **O_CREAT**: Create the file if it doesn't exist.
- **O_APPEND**: Append data to the end of the file.

Example using flags:
```c
#include <fcntl.h>

int fd = open("example.txt", O_CREAT | O_WRONLY | O_APPEND, 0644);
```
