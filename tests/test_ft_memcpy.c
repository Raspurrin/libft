#include "../srcs/libft.h"
#include <string.h>

int	test_ft_memcpy(void)
{
	char	str1[] = "hello";
	char	str2[] = "help";
	char	str3[] = "";
	char	str4[] = "s\0mething";
	char	str5[] = "s\0metimes";
	int ints1[] = {1, 2, 600, 345, -1};
	int ints2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("Original: %p\t Your function: %p\n", memcpy(str1, str2, 5), ft_memcpy(str1, str2, 5));
	printf("Original: %p\t Your function: %p\n", memcpy(str1, str2, 3), ft_memcpy(str1, str2, 3));
	printf("Original: %p\t Your function: %p\n\n", memcpy(str1, str2, 0), ft_memcpy(str1, str2, 0));
	printf("Original: %p\t Your function: %p\n", memcpy(str1, str3, 5), ft_memcpy(str1, str3, 5));
	printf("Original: %p\t Your function: %p\n", memcpy(str1, str3, 3), ft_memcpy(str1, str3, 3));
	printf("Original: %p\t Your function: %p\n\n", memcpy(str1, str3, 0), ft_memcpy(str1, str3, 0));
	printf("Original: %p\t Your function: %p\n", memcpy(str4, str5, 5), ft_memcpy(str4, str5, 5));
	printf("Original: %p\t Your function: %p\n", memcpy(str4, str5, 3), ft_memcpy(str4, str5, 3));
	printf("Original: %p\t Your function: %p\n\n", memcpy(str4, str5, 0), ft_memcpy(str4, str5, 0));
	printf("Original: %p\t Your function: %p\n", memcpy(ints1, ints2, 5), ft_memcpy(ints1, ints2, 5));
	printf("Original: %p\t Your function: %p\n", memcpy(ints1, ints2, 3), ft_memcpy(ints1, ints2, 3));
	printf("Original: %p\t Your function: %p\n", memcpy(ints1, ints2, 0), ft_memcpy(ints1, ints2, 0));
	return (0);
}