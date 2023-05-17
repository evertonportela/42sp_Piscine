#include <limits.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

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

	printf("\n***************");
	printf("\n* ft_toupper **");
	printf("\n* test_0 ******");
	printf("\n***************\n");
	printf("   toupper: %d -> %c\n", toupper('z'), toupper('z'));
	printf("ft_toupper: %d -> %c\n", ft_toupper('z'), ft_toupper('z'));

	printf("\n***************");
	printf("\n* ft_toupper **");
	printf("\n* test_1 ******");
	printf("\n***************\n");
	printf("   toupper: %d -> %c\n", toupper(1), toupper(1));
	printf("ft_toupper: %d -> %c\n", ft_toupper(1), ft_toupper(1));

	printf("\n***************");
	printf("\n* ft_toupper **");
	printf("\n* test_2 ******");
	printf("\n***************\n");
	printf("   toupper: %d -> %c\n", toupper(500), toupper(500));
	printf("ft_toupper: %d -> %c\n", ft_toupper(500), ft_toupper(500));

	printf("\n***************");
	printf("\n* ft_tolower **");
	printf("\n* test_0 ******");
	printf("\n***************\n");
	printf("   tolower: %d -> %c\n", tolower('Z'), tolower('Z'));
	printf("ft_tolower: %d -> %c\n", ft_tolower('Z'), ft_tolower('Z'));

	printf("\n***************");
	printf("\n* ft_tolower **");
	printf("\n* test_1 ******");
	printf("\n***************\n");
	printf("   tolower: %d -> %c\n", tolower(1), tolower(1));
	printf("ft_tolower: %d -> %c\n", ft_tolower(1), ft_tolower(1));

	printf("\n***************");
	printf("\n* ft_tolower **");
	printf("\n* test_2 ******");
	printf("\n***************\n");
	printf("   tolower: %d -> %c\n", tolower(500), tolower(500));
	printf("ft_tolower: %d -> %c\n", ft_tolower(500), ft_tolower(500));	

	printf("\n***************");
	printf("\n* ft_strchr ***");
	printf("\n* test_0 ******");
	printf("\n***************\n");
	char str_strchr_source_0[] = "Hello, World!";
	printf("   strchr: %p -> %s\n", strchr(str_strchr_source_0, '!'), strchr(str_strchr_source_0, '!'));
	printf("ft_strchr: %p -> %s\n", ft_strchr(str_strchr_source_0, '!'), ft_strchr(str_strchr_source_0, '!'));

	printf("\n***************");
	printf("\n* ft_strchr ***");
	printf("\n* test_1 ******");
	printf("\n***************\n");
	char str_strchr_source_1[] = "Hello, World!";
	printf("   strchr: %p -> %s\n", strchr(str_strchr_source_1, '0'), strchr(str_strchr_source_1, '0'));
	printf("ft_strchr: %p -> %s\n", ft_strchr(str_strchr_source_1, '0'), ft_strchr(str_strchr_source_1, '0'));

	printf("\n***************");
	printf("\n* ft_strchr ***");
	printf("\n* test_2 ******");
	printf("\n***************\n");
	char str_strchr_source_2[] = "Hello, World!";
	printf("   strchr: %p -> %s\n", strchr(str_strchr_source_2, '\0'), strchr(str_strchr_source_2, '\0'));
	printf("ft_strchr: %p -> %s\n", ft_strchr(str_strchr_source_2, '\0'), ft_strchr(str_strchr_source_2, '\0'));

	printf("\n***************");
	printf("\n* ft_strchr ***");
	printf("\n* test_3 ******");
	printf("\n***************\n");
	char str_strchr_source_3[] = "Hello, World!";
	printf("   strchr: %p -> %s\n", strchr(str_strchr_source_3, 'l'), strchr(str_strchr_source_3, 'l'));
	printf("ft_strchr: %p -> %s\n", ft_strchr(str_strchr_source_3, 'l'), ft_strchr(str_strchr_source_3, 'l'));

	printf("\n***************");
	printf("\n* ft_strchr ***");
	printf("\n* test_4 ******");
	printf("\n***************\n");
	char str_strchr_source_4[] = "";
	printf("   strchr: %p -> %s\n", strchr(str_strchr_source_4, 0), strchr(str_strchr_source_4, 0));
	printf("ft_strchr: %p -> %s\n", ft_strchr(str_strchr_source_4, 0), ft_strchr(str_strchr_source_4, 0));

	printf("\n***************");
	printf("\n* ft_strrchr ***");
	printf("\n* test_0 ******");
	printf("\n***************\n");
	char str_strrchr_source_0[] = "Hello, World!";
	printf("   strrchr: %p -> %s\n", strrchr(str_strrchr_source_0, '!'), strrchr(str_strrchr_source_0, '!'));
	printf("ft_strrchr: %p -> %s\n", ft_strrchr(str_strrchr_source_0, '!'), ft_strrchr(str_strrchr_source_0, '!'));

	printf("\n***************");
	printf("\n* ft_strrchr ***");
	printf("\n* test_1 ******");
	printf("\n***************\n");
	char str_strrchr_source_1[] = "Hello, World!";
	printf("   strrchr: %p -> %s\n", strrchr(str_strrchr_source_1, '0'), strrchr(str_strrchr_source_1, '0'));
	printf("ft_strrchr: %p -> %s\n", ft_strrchr(str_strrchr_source_1, '0'), ft_strrchr(str_strrchr_source_1, '0'));

	printf("\n***************");
	printf("\n* ft_strrchr ***");
	printf("\n* test_2 ******");
	printf("\n***************\n");
	char str_strrchr_source_2[] = "Hello, World!";
	printf("   strrchr: %p -> %s\n", strrchr(str_strrchr_source_2, '\0'), strrchr(str_strrchr_source_2, '\0'));
	printf("ft_strrchr: %p -> %s\n", ft_strrchr(str_strrchr_source_2, '\0'), ft_strrchr(str_strrchr_source_2, '\0'));

	printf("\n***************");
	printf("\n* ft_strrchr ***");
	printf("\n* test_3 ******");
	printf("\n***************\n");
	char str_strrchr_source_3[] = "Hello, World!";
	printf("   strrchr: %p -> %s\n", strrchr(str_strrchr_source_3, 'l'), strrchr(str_strrchr_source_3, 'l'));
	printf("ft_strrchr: %p -> %s\n", ft_strrchr(str_strrchr_source_3, 'l'), ft_strrchr(str_strrchr_source_3, 'l'));

	printf("\n***************");
	printf("\n* ft_strrchr ***");
	printf("\n* test_4 ******");
	printf("\n***************\n");
	char str_strrchr_source_4[] = "";
	printf("   strrchr: %p -> %s\n", strrchr(str_strrchr_source_4, 0), strrchr(str_strrchr_source_4, 0));
	printf("ft_strrchr: %p -> %s\n", ft_strrchr(str_strrchr_source_4, 0), ft_strrchr(str_strrchr_source_4, 0));

	printf("\n***************");
	printf("\n* ft_strncmp ***");
	printf("\n* test_0 ******");
	printf("\n***************\n");
	char str_strncmp_source_0[] = "Hello, World!";
	char str_strncmp_cmp_0[] = "Hello, World!";
	printf("   strncmp: %d\n", strncmp(str_strncmp_source_0, str_strncmp_cmp_0, 5));
	printf("ft_strncmp: %d\n", ft_strncmp(str_strncmp_source_0, str_strncmp_cmp_0, 5));

	printf("\n***************");
	printf("\n* ft_strncmp ***");
	printf("\n* test_1 ******");
	printf("\n***************\n");
	char str_strncmp_source_1[] = "Hello, World!";
	char str_strncmp_cmp_1[] = "Hello, world!";
	printf("   strncmp: %d\n", strncmp(str_strncmp_source_1, str_strncmp_cmp_1, 5));
	printf("ft_strncmp: %d\n", ft_strncmp(str_strncmp_source_1, str_strncmp_cmp_1, 5));

	printf("\n***************");
	printf("\n* ft_strncmp ***");
	printf("\n* test_2 ******");
	printf("\n***************\n");
	char str_strncmp_source_2[] = "Hello, World!";
	char str_strncmp_cmp_2[] = "";
	printf("   strncmp: %d\n", strncmp(str_strncmp_source_2, str_strncmp_cmp_2, 5));
	printf("ft_strncmp: %d\n", ft_strncmp(str_strncmp_source_2, str_strncmp_cmp_2, 5));

	printf("\n***************");
	printf("\n* ft_strncmp ***");
	printf("\n* test_3 ******");
	printf("\n***************\n");
	char str_strncmp_source_3[] = "Hello, World!";
	char str_strncmp_cmp_3[] = "Hello, world!";
	printf("   strncmp: %d\n", strncmp(str_strncmp_source_3, str_strncmp_cmp_3, 0));
	printf("ft_strncmp: %d\n", ft_strncmp(str_strncmp_source_3, str_strncmp_cmp_3, 0));

	printf("\n***************");
	printf("\n* ft_strncmp ***");
	printf("\n* test_4 ******");
	printf("\n***************\n");
	char str_strncmp_source_4[] = "Hello, World!";
	char str_strncmp_cmp_4[] = "Hello, world!";
	printf("   strncmp: %d\n", strncmp(str_strncmp_source_4, str_strncmp_cmp_4, 17));
	printf("ft_strncmp: %d\n", ft_strncmp(str_strncmp_source_4, str_strncmp_cmp_4, 17));

	printf("\n***************");
	printf("\n* ft_strlcat ***");
	printf("\n* test_0 ******");
	printf("\n***************\n");
	char str_strlcat_source_0[] = "Azul";
	char str_strlcat_dest_0[] = "o dia";
	printf("strlcat_source: %s\n", str_strlcat_source_0);
	printf("strlcat_dest: %s\n", str_strlcat_dest_0);
	printf("%zu\n", ft_strlcat(str_strlcat_dest_0, str_strlcat_source_0, 7));
	printf("strlcat_dest+source: %s\n", str_strlcat_dest_0);

	printf("%c", ('t'+256));

	printf("\n***************");
	printf("\n* ft_calloc ***");
	printf("\n* test_0 ******");
	printf("\n***************\n");

	void *p_0 = calloc(2,2);
	printf("1. %p %s\n", p_0, (char*)p_0); free(p_0);
	
	size_t size_max = 18446744073709551615UL;
	void *p_1 = calloc(size_max, size_max);
	printf("3. %p %s\n", p_1, (char*)p_1); free(p_1);

	void *p_2 = calloc(INT_MAX, INT_MAX);
	printf("4. %p %s\n", p_2, (char*)p_2); free(p_2);

	void *p_3 = calloc(INT_MIN, INT_MIN);
	printf("5. %p %s\n", p_3, (char*)p_3); free(p_3);

	void *p_4 = calloc(0, 0);
	printf("6. %p %s\n", p_4, (char*)p_4); free(p_4);

	void *p_5 = calloc(0, 5);
	printf("7. %p %s\n", p_5, (char*)p_5); free(p_5);
	
	void *p_6 = calloc(5, 0);
	printf("8. %p %s\n", p_6, (char*)p_6); free(p_6);

	void *p_7 = calloc(-5, -5);
	printf("9. %p %s\n", p_7, (char*)p_7); free(p_7);

	void *p_8 = calloc(0, -5);
	printf("10. %p %s\n", p_8, (char*)p_8); free(p_8);
	
	void *p_9 = calloc(-5, 0);
	printf("11. %p %s\n", p_9, (char*)p_9); free(p_9);

	void *p_10 = calloc(3, -5);
	printf("12. %p %s\n", p_10, (char*)p_10); free(p_10);
	
	void *p_11 = calloc(-5, 3);
	printf("13. %p %s\n", p_11, (char*)p_11); free(p_11);

	return (0);
}
