#include "../libft.h"
#include <string.h>

int	test_ft_calloc(void)
{
	printf("original: %s\t Your function: %s\n", (char *)calloc(3, sizeof(int)), (char *)ft_calloc(3, sizeof(int)));
	printf("original: %s\t Your function: %s\n", (char *)calloc(10, sizeof(char)), (char *)ft_calloc(10, sizeof(char)));
	return (0);
}


// I don't know how to show a collection of null terminators O.o But original says blank and mine says (null)