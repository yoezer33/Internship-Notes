# Exercise: Pointers

## Question

Create a pointer to the local variable `n` called `pointer_to_n`, and use it to increase the value of `n` by one.

## What I Learned

* A pointer is a variable that stores a memory address.
* `&` is used to get the address of a variable.
* `*` is used to dereference a pointer and access the value stored at that address.
* A pointer can be used to change the value of another variable.
* Pointers are useful for strings, dynamic memory allocation, function arguments, and data structures.

## Solution

```c
#include <stdio.h>

int main() {
    int n = 10;
    int *pointer_to_n = &n;

    *pointer_to_n += 1;

    printf("%d\n", n);

    return 0;
}
```

## How It Works

```c
int n = 10;
```

Creates a variable `n` with the value `10`.

```c
int *pointer_to_n = &n;
```

Creates a pointer called `pointer_to_n` and stores the address of `n`.

```c
*pointer_to_n += 1;
```

Dereferences the pointer and increases the value of `n` by 1.

So:

```text
n = 10
n = 10 + 1
n = 11
```

## Key Idea

```text
& → gets the address
* → accesses the value at the address
```

For example:

```c
int *pointer_to_n = &n;
*pointer_to_n += 1;
```

The pointer is used to change the original variable `n`.
