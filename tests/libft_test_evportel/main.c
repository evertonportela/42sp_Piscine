#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/include/libft.h"

int	main(void)
{
	printf("\n***************");
	printf("\n* ft_isalpha **");
	printf("\n***************\n");
	int	i = 0;
	while (i < 250)
	{
		if (ft_isalpha(i) != 0 && isalpha(i) != 0)
			printf(".");
		else if ((ft_isalpha(i) == 0 && isalpha(i) == 0))
			printf(".");
		else
			printf("F(%d)", i);
		i++;
	}

	printf("\n***************");
	printf("\n* ft_isdigit **");
	printf("\n***************\n");
	i = 0;
	while (i < 250)
	{
		if (ft_isdigit(i) != 0 && isdigit(i) != 0)
			printf(".");
		else if ((ft_isdigit(i) == 0 && isdigit(i) == 0))
			printf(".");
		else
			printf("F(%d)", i);
		i++;
	}

	printf("\n***************");
	printf("\n* ft_isalnum **");
	printf("\n***************\n");
	i = 0;
	while (i < 250)
	{
		if (ft_isalnum(i) != 0 && isalnum(i) != 0)
			printf(".");
		else if ((ft_isalnum(i) == 0 && isalnum(i) == 0))
			printf(".");
		else
			printf("F(%d)", i);
		i++;
	}

	printf("\n***************");
	printf("\n* ft_isascii **");
	printf("\n***************\n");
	i = 0;
	while (i < 250)
	{
		if (ft_isascii(i) != 0 && isascii(i) != 0)
			printf(".");
		else if ((ft_isascii(i) == 0 && isascii(i) == 0))
			printf(".");
		else
			printf("F(%d)", i);
		i++;
	}

	printf("\n***************");
	printf("\n* ft_isprint **");
	printf("\n***************\n");
	i = 0;
	while (i < 250)
	{
		if (ft_isprint(i) != 0 && isprint(i) != 0)
			printf(".");
		else if ((ft_isprint(i) == 0 && isprint(i) == 0))
			printf(".");
		else
			printf("F(%d)", i);
		i++;
	}

	printf("\n***************");
	printf("\n* ft_memset ***");
	printf("\n* test_0 ******");
	printf("\n***************\n");
	char str_metset[50] = "Hello, world!";
	char str_ft_metset[50] = "Hello, world!";
    memset(str_metset, '*', 7);
	ft_memset(str_ft_metset, '*', 7);
    printf("memset(): %s\n", str_metset);
	printf("ft_memset(): %s\n", str_ft_metset);

	printf("\n***************");
	printf("\n* ft_memset ***");
	printf("\n* test_1 ******");
	printf("\n***************\n");
	str_metset[50] = "Hello, world!";
	str_ft_metset[50] = "Hello, world!";
    memset(str_metset, '*', 7);
	ft_memset(str_ft_metset, '*', 7);
    printf("memset(): %s\n", str_metset);
	printf("ft_memset(): %s\n", str_ft_metset);

	return (0);
}
