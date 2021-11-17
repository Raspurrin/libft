#include "../libft.h"

char	*ft_toupper2(t_uint32 i, char c)
{
	char	*str[1];
	i++;
	if ((c >= 'a' && c <= 'z'))
	{
		c = c - ('a' - 'A');
		str[1] = c;
         return (str[1]);
	}
		
	return (NULL);
}

int	main(void)
{
	char	str[] = "No idea";
	printf("%s", ft_strmapi(str, ft_toupper2));
	return (0);
}