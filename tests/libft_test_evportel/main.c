#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"

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
	char str_metset_0[50] = "Hello, world!";
	char str_ft_metset_0[50] = "Hello, world!";
    memset(str_metset_0, '*', 7);
	ft_memset(str_ft_metset_0, '*', 7);
    printf("memset(): %s\n", str_metset_0);
	printf("ft_memset(): %s\n", str_ft_metset_0);

	printf("\n***************");
	printf("\n* ft_strlen ***");
	printf("\n* test_0 ******");
	printf("\n***************\n");
	char str_strlen_0[50] = "Hello, world!";
	char str_ft_strlen_0[50] = "Hello, world!";
    printf("strlen(): %lu\n", strlen(str_strlen_0));
	printf("ft_strlen(): %lu\n", ft_strlen(str_ft_strlen_0));

	return (0);
}
