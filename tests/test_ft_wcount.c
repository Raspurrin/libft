#include "../libft.h"

int	main(void)
{
	char	str[] = "Suffer and have fun!";
	char	str2[] = "Suffer    and	 have fun!";
	printf("Your function: %ld\n", ft_wcount(str, ' '));
	printf("Your function: %ld\n", ft_wcount(str, 'a'));
	return (0);
}