#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(void)
{
    char str[50] = "Hello, world!";
    printf("Antes da memset(): %s\n", str);

    memset(str, '*', 7);
    printf("Depois da memset(): %s\n", str);

    return 0;
}