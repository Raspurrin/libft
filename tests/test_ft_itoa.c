#include "../libft.h"

int	test_ft_itoa(void)
{
	printf("Right answer: 35334\t\t Your function: %s\n", ft_itoa(35334));
	printf("Right answer: 0\t\t\t Your function: %s\n", ft_itoa(0));
	printf("Right answer: -349\t\t Your function: %s\n", ft_itoa(-349));
	printf("Right answer: -2147483648\t Your function: %s\n", ft_itoa(-2147483648));
	printf("Right answer: 10\t\t Your function: %s\n", ft_itoa(10));
	printf("Right answer: -10\t\t Your function: %s\n", ft_itoa(-10));
	printf("Right answer: -1\t\t Your function: %s\n", ft_itoa(-1));
	return (0);
}

// Floating point exception