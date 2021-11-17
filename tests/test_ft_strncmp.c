#include "../libft.h"
#include <string.h>

int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "help";
	char	str3[] = "";
	printf("Original: %d\t Your function: %d\n", strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));
	printf("Original: %d\t Your function: %d\n", strncmp(str1, str2, 3), ft_strncmp(str1, str2, 3));
	printf("Original: %d\t Your function: %d\n\n", strncmp(str1, str2, 0), ft_strncmp(str1, str2, 0));

	printf("Original: %d\t Your function: %d\n", strncmp(str1, str3, 5), ft_strncmp(str1, str3, 5));
	printf("Original: %d\t Your function: %d\n", strncmp(str1, str3, 3), ft_strncmp(str1, str3, 3));
	printf("Original: %d\t Your function: %d\n", strncmp(str1, str3, 0), ft_strncmp(str1, str3, 0));
	return (0);
}