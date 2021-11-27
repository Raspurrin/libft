#include "../srcs/libft.h"
#include <ctype.h>

int	test_ft_toupper(void)
{
	printf("Testing: 'a'\tOriginal: %d\t Your function: %d\n", toupper('a'), ft_toupper('a'));
	printf("Testing: 'z'\tOriginal: %d\t Your function: %d\n", toupper('z'), ft_toupper('z'));
	printf("Testing: 'A'\tOriginal: %d\t Your function: %d\n", toupper('A'), ft_toupper('A'));
	printf("Testing: 'Z'\tOriginal: %d\t Your function: %d\n", toupper('Z'), ft_toupper('Z'));
	return (0);
}