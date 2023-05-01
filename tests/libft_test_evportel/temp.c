#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int i = 0;
	printf("\n");
	while (i < 250)
	{
		printf("> %d", i);
		printf(" %c", i);
		printf(" %d\n", isprint(i));
		i++;
	}
}