#include <stdio.h>

struct person {
    char *name;
    int age;
};

int main() {
    struct person p;

    p.name = "Tandin";
    p.age = 20;

    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    return 0;
}