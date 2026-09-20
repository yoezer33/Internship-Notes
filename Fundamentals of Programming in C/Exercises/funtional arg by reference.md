### Exercise: Passing a Struct to a Function Using a Pointer

#### Question

Write a `birthday()` function that takes a pointer to a `person` struct and increases the person's age by `1`.

#### What I Learned

I learned how to:

- Pass a struct to a function using a pointer.
- Use a pointer to modify a struct.
- Use the `->` operator to access struct members through a pointer.
- Increase a struct member using `++`.
- Pass the address of a struct using `&`.

#### Solution

```c
#include <stdio.h>

typedef struct {
    char *name;
    int age;
} person;

/* function declaration */
void birthday(person *p);

/* function definition */
void birthday(person *p) {
    p->age++;
}

int main() {
    person john;
    john.name = "John";
    john.age = 27;

    printf("%s is %d years old.\n", john.name, john.age);

    birthday(&john);

    printf("Happy birthday! %s is now %d years old.\n",
           john.name, john.age);

    return 0;
}