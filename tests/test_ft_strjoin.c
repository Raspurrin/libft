#include "../libft.h"

int	test_ft_strjoin(void)
{
	char	str1[] = "I have ";
	char	str2[] = "a cookie";
	printf("Your function: %s\n", ft_strjoin(str1, str2));
	return (0);
}