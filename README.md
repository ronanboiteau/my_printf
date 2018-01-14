# my_printf

{EPITECH.} first year project.

Recoding libc's `printf()` function.

## Requirements

 - [Make](https://www.gnu.org/software/make/)
 - [GCC](https://gcc.gnu.org/)

## Get started

### Compile the library

Navigate to the root of the repository from your Terminal and run `make` to build the `libmy.a` static library.

### Use my_printf

 - Copy this repository inside a folder in your project directory.
 - Include the `my.h` header file in your `.c` files where you want to use `my_printf`:
```cpp
#include "my.h"
```
 - If you put this repository in a folder named `lib/`, run this command to compile a `main.c` file using the library:
```
gcc main.c -L lib/ -l my -I lib/include/
```

## Functions

Here is a list of the functions you will find in the `libmy.a` library:

```cpp
int     my_printf(const char *format, ...);
```
This function has the same behavior as libc's [`printf()`](https://linux.die.net/man/3/printf).

```cpp
int     my_dprintf(int fd, const char *format, ...);
```
This function has the same behavior as libc's [`dprintf()`](https://linux.die.net/man/3/dprintf).

```cpp
void    my_exit(int exit_code, const char *format, ...);
```
This function has the same behavior as libc's [`printf()`](https://linux.die.net/man/3/printf). Except it outputs on [`stderr`](https://en.wikipedia.org/wiki/Standard_streams#Standard_error_(stderr)) & it takes an [exit status](https://en.wikipedia.org/wiki/Exit_status#C_language) as first argument. After `my_exit()` is done printing, it will call libc's [`exit()`](https://linux.die.net/man/3/exit) to quit your program with the exit status you gave as an argument.

## Author

* **Ronan Boiteau** ([GitHub](https://github.com/ronanboiteau) / [LinkedIn](https://www.linkedin.com/in/ronanboiteau/))
