#include "../includes/libft.h"

size_t	ft_strccpy(const char *src, char c)
{
	size_t	i;
	size_t	len;
	char	*out;

	i = 0;
	len = ft_strclen(src, c);
	out = malloc(len + 1);
	while (i < len)
	{
		out[i] = src[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
