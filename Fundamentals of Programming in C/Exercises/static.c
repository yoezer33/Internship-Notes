int sum(int num) {
    int total = 0;

    for (int i = 1; i <= num; i++) {
        total += i;
    }

    return total;
}

int main() {
    printf("%d ", sum(55));
    printf("%d ", sum(45));
    printf("%d ", sum(50));

    return 0;
}