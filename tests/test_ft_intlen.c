#include "../srcs/libft.h"
#include <string.h>

int	test_ft_intlen(void)
{
	printf("Your function: %ld\n", ft_intlen(35334));
	printf("Your function: %ld\n", ft_intlen(0));
	printf("Your function: %ld\n", ft_intlen(-349));
	printf("Your function: %ld\n", ft_intlen(-2147483648));
	printf("Your function: %ld\n", ft_intlen(10));
	printf("Your function: %ld\n", ft_intlen(-10));
	printf("Your function: %ld\n", ft_intlen(-1));
	return (0);
}