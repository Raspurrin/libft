#include "../libft.h"

int	test_ft_wcount(void)
{
	char	str[] = "Suffer and have fun!";
	char	str2[] = "Suffer    and	 have fun!";
	printf("Your function: %ld\n", ft_wcount(str, ' '));
	printf("Your function: %ld\n", ft_wcount(str, 'a'));
	printf("Your function: %ld\n", ft_wcount(str2, ' '));
	printf("Your function: %ld\n", ft_wcount(str2, 'a'));
	return (0);
}