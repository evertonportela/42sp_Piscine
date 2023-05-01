// #include <ctype.h>
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	/* ft_isalpha */
	printf("\n* ft_isalpha");
	char test_alpha_1 = '0';
	printf("\nResultado Esperado: 1");
	printf("\nResultado da Função: %d", ft_isalpha(&test_alpha_1));
}
