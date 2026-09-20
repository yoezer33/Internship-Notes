### Exercise: Creating a Struct with `typedef`

#### Question

Define a `person` struct using the `typedef` syntax. The struct should contain a `name` and an `age`.

#### What I Learned

I learned how to:

- Create a `struct` in C.
- Use `typedef` to give a struct a simpler name.
- Store different types of data inside a struct.
- Create a variable using a custom struct type.
- Access struct members using the dot `.` operator.

#### Solution

```c
#include <stdio.h>

typedef struct {
    char *name;
    int age;
} person;

int main() {
    person john;

    /* testing code */
    john.name = "John";
    john.age = 27;

    printf("%s is %d years old.", john.name, john.age);

    return 0;
}