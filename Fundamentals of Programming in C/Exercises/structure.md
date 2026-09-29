# Exercise: Structures

## Question

Define a new data structure named `person`, which contains:

* A string (pointer to char) called `name`
* An integer called `age`

## What I Learned

* A structure can contain several named variables inside one data type.
* Structures are defined using the `struct` keyword.
* The `.` operator is used to access variables inside a structure.
* `typedef` allows us to give a structure a shorter name.
* Structures can contain pointers, such as `char *` for strings.
* Structures can be used to pass multiple pieces of data through a single argument.
* Structures are also used in data structures such as linked lists and binary trees.

## Solution

```c
#include <stdio.h>

typedef struct {
    char *name;
    int age;
} person;

int main() {
    person p;

    p.name = "John";
    p.age = 25;

    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    return 0;
}
```

## How It Works

```c
typedef struct {
    char *name;
    int age;
} person;
```

Creates a structure named `person`.

It contains:

* `name` → a `char` pointer used to store a string
* `age` → an integer used to store the person's age

Then:

```c
person p;
```

creates a variable `p` of type `person`.

We use the `.` operator to access the structure members:

```c
p.name = "John";
p.age = 25;
```

Finally:

```c
printf("Name: %s\n", p.name);
printf("Age: %d\n", p.age);
```

prints the values stored in the structure.

## Key Idea

```c
typedef struct {
    char *name;
    int age;
} person;
```

creates a new data type called `person`.

```c
person p;
```

creates a `person`.

```c
p.name
p.age
```

access the values inside the structure using the `.` operator.
