#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} point;

point *construct_point(int x, int y)
{
    point *p = (point *)malloc(sizeof(point));

    p->x = x;
    p->y = y;

    return p;
}

int main()
{
    point *p = construct_point(10, 15);

    printf("point: (%d, %d)\n", p->x, p->y);

    free(p);

    return 0;
}
