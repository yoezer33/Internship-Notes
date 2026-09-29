int main() {
    int n = 10;

    // Create a pointer to n
    int *pointer_to_n = &n;

    // Increase n using the pointer
    *pointer_to_n += 1;

    printf("The value of n is %d\n", n);

    return 0;
}