#include "../libft.h"
#include <bsd/string.h>

int	main(void)
{
	char str1[] = "Suffer and have fun!";
	char str2[] = "Suffer and have fun!";
	// char str3[] = "Suffer and have fun!";
	// char str4[] = "Suffer and have fun!";
	char str5[] = "have";
	// char str6[] = "a";
	// char str7[] = "";
	printf("Original: %s\t Your function: %s\n", strnstr(str1, str5, 21), ft_strnstr(str2, str5, 21));
	return (0);
}

// error: implicit declaration of function ‘strnstr’; did you mean ‘strstr’?