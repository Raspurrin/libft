#include "../srcs/libft.h"
#include <string.h>

int	test_ft_substr(void)
{
	char	str[] = "Suffer and have fun!";
	printf("Your function: %s\n", ft_substr(str, 0, 21));
	printf("Your function: %s\n", ft_substr(str, 7, 21));
	printf("Your function: %s\n", ft_substr(str, 11, 21));
	printf("Your function: %s\n", ft_substr(str, 0, 7));
	return (0);
}
