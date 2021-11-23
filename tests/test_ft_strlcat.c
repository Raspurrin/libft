#include "../libft.h"
#include <bsd/string.h>

int	test_ft_strlcat(void)
{
	char	str1[18] = "I have";
	char	str2[18] = "I have"; // 6
	char	str3[18] = "I have";
	char	str4[18] = "I have";
	char	str5[18] = "I have";
	char	str6[18] = "I have";
	char	str7[18] = "I have";
	char	str8[18] = "I have";
	char	str9[18] = "I have";
	char	str10[18] = "I have";
	char	str11[] = " a cookie"; // 8
	// char	str4[] = "The world will be filled with nanobots";
	// char	str5[] = "The world will be filled with nanobots";
	printf("Original: %ld \t%s\t Your function: %lu\t %s\n", strlcat(str1, str11, 9), str1, ft_strlcat(str2, str11, 9), str2);
	printf("Original: %ld \t%s\t\t Your function: %lu\t %s\n", strlcat(str3, str11, 0), str3, ft_strlcat(str4, str11, 0), str4);
	printf("Original: %ld \t%s\t Your function: %lu\t %s\n", strlcat(str5, str11, 17), str5, ft_strlcat(str6, str11, 17), str6);
	printf("Original: %ld \t%s\t\t Your function: %lu\t %s\n", strlcat(str7, str11, 5), str7, ft_strlcat(str8, str11, 5), str8);
	printf("Original: %ld \t%s\t\t Your function: %lu\t %s\n", strlcat(str9, str11, 6), str9, ft_strlcat(str10, str11, 6), str10);
	return (0);
}

// undefined reference to `ft_strlcat'. Can't test ._.