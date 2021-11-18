#include "../libft.h"
#include <string.h>

int	main(void)
{
	char	str1[] = "cookie";
	char	str2[] = "something";

	printf("original: %ld\t Your function: %ld\n", strlen(str1), ft_strlen(str1));
	printf("original: %ld\t Your function: %ld\n", strlen(str2), ft_strlen(str2));
	return (0);
}