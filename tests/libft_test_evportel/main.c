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
	char str_memset_0[50] = "Hello, world!";
	char str_ft_memset_0[50] = "Hello, world!";
    memset(str_memset_0, '*', 7);
	ft_memset(str_ft_memset_0, '*', 7);
    printf("   memset(): %s\n", str_memset_0);
	printf("ft_memset(): %s\n", str_ft_memset_0);


	printf("\n***************");
	printf("\n* ft_memset ***");
	printf("\n* test_1 ******");
	printf("\n***************\n");
	char str_memset_1[50] = "Hello, world!";
	char str_ft_memset_1[50] = "Hello, world!";
    memset(str_memset_1, 97, 7);
	ft_memset(str_ft_memset_1, 97, 7);
    printf("   memset(): %s\n", str_memset_1);
	printf("ft_memset(): %s\n", str_ft_memset_1);

	printf("\n***************");
	printf("\n* ft_memset ***");
	printf("\n* test_2 ******");
	printf("\n***************\n");
	char str_memset_2[50] = "Hello, world!";
	char str_ft_memset_2[50] = "Hello, world!";
    memset(str_memset_2, 97, 15);
	ft_memset(str_ft_memset_2, 97, 15);
    printf("   memset(): %s\n", str_memset_2);
	printf("ft_memset(): %s\n", str_ft_memset_2);

	printf("\n***************");
	printf("\n* ft_strlen ***");
	printf("\n* test_0 ******");
	printf("\n***************\n");
	char str_strlen_0[50] = "Hello, world!";
	char str_ft_strlen_0[50] = "Hello, world!";
    printf("   strlen(): %lu\n", strlen(str_strlen_0));
	printf("ft_strlen(): %zu\n", ft_strlen(str_ft_strlen_0));

	printf("\n***************");
	printf("\n* ft_bzero ****");
	printf("\n* test_0 ******");
	printf("\n***************\n");
	char	str_bzero_0[] = "Hello, world!";
	char	str_ft_bzero_0[] = "Hello, world!";
	bzero(str_bzero_0, 13);
	ft_bzero(str_ft_bzero_0, 13);
    printf("   bzero(): %s\n", str_bzero_0);
	printf("ft_bzero(): %s\n", str_ft_bzero_0);

	// printf("\n***************");
	// printf("\n* ft_bzero ***");
	// printf("\n* test_1 ******");
	// printf("\n***************\n");
	// char	str_bzero_1[50];
	// char	str_ft_bzero_1[50];
	// bzero(str_bzero_1, 13);
	// ft_bzero(str_ft_bzero_1, 13);
    // printf("   bzero(): %s\n", str_bzero_1);
	// printf("ft_bzero(): %s\n", str_ft_bzero_1);

	printf("\n***************");
	printf("\n* ft_memcpy ***");
	printf("\n* test_0 ******");
	printf("\n***************\n");
	char	source_0[50] = "Hello, world!";
	char	str_memcpy_0[50];
	char	str_ft_memcpy_0[50];
	memcpy(str_memcpy_0, source_0, 5);
	ft_memcpy(str_ft_memcpy_0, source_0, 5);
    printf("   memcpy(): %s\n", str_memcpy_0);
	printf("ft_memcpy(): %s\n", str_ft_memcpy_0);


	printf("\n***************");
	printf("\n* ft_memcpy ***");
	printf("\n* test_1 ******");
	printf("\n***************\n");
	char	source_1[50];
	char	str_memcpy_1[50];
	char	str_ft_memcpy_1[50];
	memcpy(str_memcpy_1, source_1, 5);
	ft_memcpy(str_ft_memcpy_1, source_1, 5);
    printf("   memcpy(): %s\n", str_memcpy_1);
	printf("ft_memcpy(): %s\n", str_ft_memcpy_1);

	printf("\n***************");
	printf("\n* ft_memmove **");
	printf("\n* test_0 ******");
	printf("\n***************\n");
	char	str_memmove_0[50] = "Hello, world!";
	char	str_ft_memmove_0[50] = "Hello, world!";
	memmove(str_memmove_0 + 6, str_memmove_0, strlen(str_memmove_0) + 1);
	ft_memmove(str_ft_memmove_0 + 6, str_ft_memmove_0, ft_strlen(str_ft_memmove_0) + 1);
    printf("   memmove(): %s\n", str_memmove_0);
	printf("ft_memmove(): %s\n", str_ft_memmove_0);
	
	printf("\n***************");
	printf("\n* ft_strlcpy **");
	printf("\n* test_0 ******");
	printf("\n***************\n");
	char	strlcpy_src_0[] = "Hello, world!";
	// char	str_strlcpy_0[6];
	char	str_ft_strlcpy_0[5];
	// strlcpy(str_strlcpy_0, strlpy_src_0, sizeof(str_strlcpy_0));
	// printf("strlcpy(): %s\n", str_strlcpy_0);
	printf("ft_strlcpy = %zu\n", ft_strlcpy(str_ft_strlcpy_0, strlcpy_src_0, sizeof(str_ft_strlcpy_0)));
	printf("ft_strlcpy: %s\n", str_ft_strlcpy_0);

	printf("\n***************");
	printf("\n* ft_strlcat **");
	printf("\n* test_0 ******");
	printf("\n***************\n");
	char	strlcat_src_0[] = ", world!";
	// char	str_strlcat_0[] = "Hello";
	char	str_ft_strlcat_0[] = "Hello";
	// printf("   strlcat = %d\n", strlcat(str_strlcat_0, strlcat_src_0, sizeof(strlcat_src_0)));
	// printf("   strlcat: %s\n", str_strlcat_0);
	printf("ft_strlcat = %zu\n", ft_strlcat(str_ft_strlcat_0, strlcat_src_0, sizeof(strlcat_src_0)));
	printf("ft_strlcat: %s\n", str_ft_strlcat_0);

	printf("\n***************");
	printf("\n* ft_strlcat **");
	printf("\n* test_1 ******");
	printf("\n***************\n");
	char	strlcat_src_1[] = ", world!";
	// char	str_strlcat_0[] = "Hello";
	char	str_ft_strlcat_1[50] = "Hello";
	// printf("   strlcat = %d\n", strlcat(str_strlcat_1, strlcat_src_1, sizeof(strlcat_src_1)));
	// printf("   strlcat: %s\n", str_strlcat_1);
	printf("ft_strlcat = %zu\n", ft_strlcat(str_ft_strlcat_1, strlcat_src_1, 50));
	printf("ft_strlcat: %s\n", str_ft_strlcat_1);

	return (0);
}
