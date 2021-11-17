#include "../libft.h"
#include <string.h>

int	main(void)
{
	char	str[] = "Suffer and have fun!";
	printf("Original: %p\t Your function: %p\n", strrchr(str, 'a'), ft_strrchr(str, 'a'));
	printf("Original: %p\t Your function: %p\n", strrchr(str, '!'), ft_strrchr(str, '!'));
	printf("Original: %p\t Your function: %p\n", strrchr(str, 'f'), ft_strrchr(str, 'f'));
	printf("Original: %p\t Your function: %p\n", strrchr(str, 'S'), ft_strrchr(str, 'S'));
	printf("Original: %p\t Your function: %p\n", strrchr(str, 'd'), ft_strrchr(str, 'd'));
	printf("Original: %p\t\t\t Your function: %p\n", strrchr(str, 'w'), ft_strrchr(str, 'w'));
	return (0);
}
