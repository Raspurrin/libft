#include "../libft.h"
#include <string.h>

int	test_ft_memchr(void)
{
	char	str[] = "Suffer and have fun!";
	printf("Original: %p\t Your function: %p\n", memchr(str, 'a', 21), ft_memchr(str, 'a', 21));
	printf("Original: %p\t\t\t Your function: %p\n", memchr(str, 'a', 5), ft_memchr(str, 'a', 5));
	printf("Original: %p\t Your function: %p\n", memchr(str, 'S', 21), ft_memchr(str, 'S', 21));
	printf("Original: %p\t Your function: %p\n", memchr(str, 'S', 5), ft_memchr(str, 'S', 5));
	printf("Original: %p\t Your function: %p\n", memchr(str, ' ', 21), ft_memchr(str, ' ', 21));
	printf("Original: %p\t\t\t Your function: %p\n", memchr(str, ' ', 5), ft_memchr(str, ' ', 5));
	return (0);
}