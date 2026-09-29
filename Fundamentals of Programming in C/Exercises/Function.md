# Exercise: Functions

## Question

Write a function called `print_big` that receives an integer and prints `x is big` if the number is greater than 10.

## What I Learned

* Functions are blocks of code used to perform a specific task.
* Functions can receive arguments.
* Functions can return a value or return nothing.
* `void` means the function does not return a value.
* `if` can be used inside a function to check a condition.
* `printf()` is used to print the result.

## Solution

```c
#include <stdio.h>

void print_big(int number);

int main() {
    int array[] = {1, 11, 2, 22, 3, 33};
    int i;

    for (i = 0; i < 6; i++) {
        print_big(array[i]);
    }

    return 0;
}

void print_big(int number) {
    if (number > 10) {
        printf("%d is big\n", number);
    }
}
```

## How It Works

The `print_big()` function receives an integer called `number`.

The `if` statement checks:

```c
number > 10
```

If the number is greater than 10, it prints the number followed by `is big`.

The `for` loop sends each value from the array to the `print_big()` function.

## Key Idea

Use a function to perform a specific task. Here, `print_big()` checks whether a number is greater than 10 and prints it if the condition is true.
