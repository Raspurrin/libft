#include "../libft.h"
#include <bsd/string.h>

int	test_ft_strlcpy(void)
{
	char	str1[] = "hello";
	char	str2[] = "help";
	char	str3[] = "";
	printf("Original: %lu\t Your function: %lu\n", strlcpy(str1, str2, 5), ft_strlcpy(str1, str2, 5));
	printf("Original: %lu\t Your function: %lu\n", strlcpy(str1, str2, 3), ft_strlcpy(str1, str2, 3));
	printf("Original: %lu\t Your function: %lu\n\n", strlcpy(str1, str2, 0), ft_strlcpy(str1, str2, 0));
	printf("Original: %lu\t Your function: %lu\n", strlcpy(str1, str3, 5), ft_strlcpy(str1, str3, 5));
	printf("Original: %lu\t Your function: %lu\n", strlcpy(str1, str3, 3), ft_strlcpy(str1, str3, 3));
	printf("Original: %lu\t Your function: %lu\n", strlcpy(str1, str3, 0), ft_strlcpy(str1, str3, 0));
	return (0);
}

// undefined reference to `strlcpy' O_o 