#include "../libft.h"
#include <bsd/string.h>

int	main(void)
{
	char	str1[] = "I have   ";
	char	str2[] = "I have   ";
	char	str3[] = "a cookie";
	// char	str4[] = "The world will be filled with nanobots";
	// char	str5[] = "The world will be filled with nanobots";
	printf("Original: %ld\t Your function: %lu\n", strlcat(str1, str3, 10), ft_strlcat(str2, str3, 10));
	printf("Original str1 == %s\t Your str2 == %s\n", str1, str2);
	// printf("Original: %lu\t Your function: %u\n", strlcat(str1, str2, 3), ft_strlcat(str1, str2, 3));
	// printf("Original: %lu\t Your function: %u\n\n", strlcat(str1, str2, 0), ft_strlcat(str1, str2, 0));
	// printf("Original: %lu\t Your function: %u\n", strlcat(str1, str3, 5), ft_strlcat(str1, str3, 5));
	// printf("Original: %lu\t Your function: %u\n", strlcat(str1, str3, 3), ft_strlcat(str1, str3, 3));
	// printf("Original: %lu\t Your function: %u\n", strlcat(str1, str3, 0), ft_strlcat(str1, str3, 0));
	return (0);
}

// undefined reference to `ft_strlcat'. Can't test ._.