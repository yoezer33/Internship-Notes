#include <stdio.h>

struct person {
    char *name;
    int age;
};

void birthday(struct person *p) {
    p->age++;
}

int main() {
    struct person p = {"Tandin", 20};

    birthday(&p);

    printf("%s is %d years old.\n", p.name, p.age);

    return 0;
}