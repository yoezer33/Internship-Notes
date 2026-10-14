#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
};

int main(void) {
    struct point *p = malloc(sizeof(struct point));

    if (p == NULL) {
        return 1;
    }

    p->x = 10;
    p->y = 20;

    printf("x = %d, y = %d\n", p->x, p->y);

    free(p);

    return 0;
}