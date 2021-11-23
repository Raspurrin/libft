#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	test_ft_atoi(void)
{
	printf("Testing: 2147483647\tOriginal: %d\t Your function: %d\n", atoi("2147483647"), ft_atoi("2147483647"));
	printf("Testing: -2147483648\tOriginal: %d\t Your function: %d\n", atoi("-2147483648"), ft_atoi("-2147483648"));
	printf("Testing: 10\tOriginal: %d\t Your function: %d\n", atoi("10"), ft_atoi("10"));
	printf("Testing: 0\tOriginal: %d\t Your function: %d\n", atoi("0"), ft_atoi("0"));
	printf("Testing: 	-+--300\tOriginal: %d\t Your function: %d\n", atoi(" 	-+--300"), ft_atoi(" 	-+--300"));
	return (0);
}