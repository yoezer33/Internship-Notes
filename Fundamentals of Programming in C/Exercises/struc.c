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