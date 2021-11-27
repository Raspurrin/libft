#include "../srcs/libft.h"
#include <ctype.h>

int	test_ft_tolower(void)
{
	printf("Testing: 'a'\tOriginal: %d\t Your function: %d\n", tolower('a'), ft_tolower('a'));
	printf("Testing: 'z'\tOriginal: %d\t Your function: %d\n", tolower('z'), ft_tolower('z'));
	printf("Testing: 'A'\tOriginal: %d\t Your function: %d\n", tolower('A'), ft_tolower('A'));
	printf("Testing: 'Z'\tOriginal: %d\t Your function: %d\n", tolower('Z'), ft_tolower('Z'));
	return (0);
}