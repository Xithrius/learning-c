#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "testing";

    printf("%s\n", str);

    printf("The first character: %c\n", str[0]);

    printf("All the characters in order:\n");

    for (int i = 0; i < strlen(str); i++)
    {
        printf("%d: %c\n", i, str[i]);
    }

    return 0;
}
