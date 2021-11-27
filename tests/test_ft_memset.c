#include "../srcs/libft.h"
#include <string.h>

int	test_ft_memset(void)
{
 	int 	ints[] = {1, 2, 600, 345, -1};
	char	str[] = "s\0mething";

	printf("original: %s\t Your function: %s\n", (char *)memset(ints, 'c', sizeof(ints)), (char *)ft_memset(ints, 'c', sizeof(ints)));
	printf("original: %s\t Your function: %s\n", (char *)memset(ints, 43, sizeof(ints)), (char *)ft_memset(ints, 43, sizeof(ints)));
	printf("original: %s\t\t Your function: %s\n", (char *)memset(str, 'a', 10), (char *)ft_memset(str, 'a', 10));
	printf("original: %s\t\t Your function: %s\n", (char *)memset(str, 'b', 3), (char *)ft_memset(str, 'b', 3));
	return (0);
}