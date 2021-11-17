#include "../libft.h"
#include <string.h>

int	main(void)
{
	char	str[] = "Suffer and have fun!";
	printf("Original: %p\t Your function: %p\n", strchr(str, 'a', 21), ft_strchr(str, 'a', 21));
	printf("Original: %p\t\t\t Your function: %p\n", strchr(str, 'a', 5), ft_strchr(str, 'a', 5));
	printf("Original: %p\t Your function: %p\n", strchr(str, 'S', 21), ft_strchr(str, 'S', 21));
	printf("Original: %p\t Your function: %p\n", strchr(str, 'S', 5), ft_strchr(str, 'S', 5));
	printf("Original: %p\t Your function: %p\n", strchr(str, ' ', 21), ft_strchr(str, ' ', 21));
	printf("Original: %p\t\t\t Your function: %p\n", strchr(str, ' ', 5), ft_strchr(str, ' ', 5));
	return (0);
}

// undefined reference to `main'?