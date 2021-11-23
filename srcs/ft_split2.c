// #include "../libft.h"
// #include <stdlib.h>

// t_size	ft_wlen(char const *str, char c, t_size *i)
// {
// 	t_size	wlen;

// 	while (str[*i] == c)
// 		*i++;
// 	while (str[*i] != c)
// 	{
// 		wlen++;
// 		*i++;
// 	}
// 	return (wlen);
// }

// char	**ft_split(char const *str, char c)
// {
// 	t_size	i;
// 	t_size	out;
// 	t_size	wcount;
// 	t_size	wlen;

// 	wcount = ft_wcount(str, c);
// 	out = malloc(wcount * sizeof(char *));
// 	wlen = ft_wlen(str, c, &i);
// }