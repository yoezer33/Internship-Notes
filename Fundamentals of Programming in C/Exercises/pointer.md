### Exercise: Pointers and Addresses

#### Question

Create a pointer called `pointer_to_n` that points to the variable `n`. Then use the pointer to change the value of `n` from `10` to `11`.

#### What I Learned

I learned how to:

- Create a pointer to an integer.
- Use `&` to get the memory address of a variable.
- Use `*` to access the value stored at a memory address.
- Change a variable's value using a pointer.
- Understand the difference between an address and a value.

#### Solution

```c
#include <stdio.h>

int main() {
    int n = 10;

    int *pointer_to_n = &n;
    (*pointer_to_n)++;

    /* testing code */
    if (pointer_to_n != &n) return 1;
    if (*pointer_to_n != 11) return 1;

    printf("Done!\n");
    return 0;
}