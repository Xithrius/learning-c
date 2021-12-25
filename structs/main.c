#include <stdio.h>

int main()
{
    typedef struct
    {
        char *brand;
        int model;
    } vehicle;

    vehicle car;

    car.brand = "Ford";
    car.model = 2007;

    printf("This '%s' is from %d.\n", car.brand, car.model);

    return 0;
}
