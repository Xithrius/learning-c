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

void move_point(point *p, int x, int y)
{
    p->x += x;
    p->y += y;
}

void locate_point(point *p)
{
    printf("point: (%d, %d)\n", p->x, p->y);
}

int main()
{
    point *p = construct_point(10, 15);
    locate_point(p);

    move_point(p, 1, -1);
    locate_point(p);

    free(p);

    return 0;
}
