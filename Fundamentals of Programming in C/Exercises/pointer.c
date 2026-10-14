#include <stdio.h>
int main() {
    int n = 10;
    int *pointer_to_n = &n;

    (*pointer_to_n)++;

    printf("%d\n", n);

    return 0;
}