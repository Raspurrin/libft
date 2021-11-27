#include "../srcs/libft.h"

char	ft_toupper2(t_uint32 i, char c)
{
	i++;
	if ((c >= 'a' && c <= 'z'))
         return (c - ('a' - 'A'));
	return (0);
}

int	test_ft_strmapi(void)
{
	char	str[] = "No idea";
	printf("%s", ft_strmapi(str, ft_toupper2));
	return (0);
}