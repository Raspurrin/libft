#include "../libft.h"
#include <string.h>

int	main(void)
{
 	int 	ints[] = {1, 2, 600, 345, -1};
	char	str[] = "s\0mething";

	printf("original: %s\t Your function: %s\n", (char *)bzero(ints, sizeof(ints)), (char *)ft_bzero(ints, sizeof(ints)));
	printf("original: %s\t Your function: %s\n", (char *)bzero(ints,  sizeof(ints)), (char *)ft_bzero(ints, sizeof(ints)));
	printf("original: %s\t\t Your function: %s\n", (char *)bzero(str,  10), (char *)ft_bzero(str, 10));
	printf("original: %s\t\t Your function: %s\n", (char *)bzero(str,  3), (char *)ft_bzero(str, 3));
	return (0);
}

// error: invalid use of void expression