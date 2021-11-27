#include "../srcs/libft.h"
#include <string.h>

int	test_ft_strchr(void)
{
	char	str[] = "Suffer and have fun!";
	printf("Original: %p\t Your function: %p\n", strchr(str, 'a'), ft_strchr(str, 'a'));
	printf("Original: %p\t\t\t Your function: %p\n", strchr(str, 'a'), ft_strchr(str, 'a'));
	printf("Original: %p\t Your function: %p\n", strchr(str, 'S'), ft_strchr(str, 'S'));
	printf("Original: %p\t Your function: %p\n", strchr(str, 'S'), ft_strchr(str, 'S'));
	printf("Original: %p\t Your function: %p\n", strchr(str, ' '), ft_strchr(str, ' '));
	printf("Original: %p\t\t\t Your function: %p\n", strchr(str, ' '), ft_strchr(str, ' '));
	return (0);
}

// undefined reference to `main'?