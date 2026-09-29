# Exercise: Static

## Question

Find the sum of some numbers by using the `static` keyword. Do not pass a variable representing the running total to the `sum()` function.

## What I Learned

* `static` is a keyword in C.
* A static variable keeps its value even after the function finishes.
* A normal local variable is created again each time the function is called.
* A static variable is initialized only once.
* A static function can only be accessed within the file where it is declared.
* Global variables can be accessed outside the file, while static variables are limited to the file.

## Solution

```c
#include <stdio.h>

int sum(int number) {
    static int total = 0;
    total += number;
    return total;
}

int main() {
    printf("%d ", sum(55));
    printf("%d ", sum(45));
    printf("%d ", sum(50));

    return 0;
}
```

## How It Works

```c
static int total = 0;
```

The `static` variable keeps its value between function calls.

First:

```c
sum(55);
```

`total` becomes `55`.

Then:

```c
sum(45);
```

The previous value `55` is preserved, so:

`55 + 45 = 100`

Then:

```c
sum(50);
```

The previous value `100` is preserved, so:

`100 + 50 = 150`

Output:

```text
55 100 150
```

## Key Idea

A `static` local variable **remembers its previous value between function calls**.

```text
Normal variable → starts aga
```
