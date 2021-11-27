#include "../srcs/libft.h"
#include <string.h>

int	test_ft_strdup(void)
{
	char	str1[] = "cookie";
	char	str2[] = "something";

	printf("original: %s\t Your function: %s\n", strdup(str1), ft_strdup(str1));
	printf("original: %s\t Your function: %s\n", strdup(str2), ft_strdup(str2));
	return (0);
}