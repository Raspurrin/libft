#include "../libft.h"

int	main(void)
{
	t_size	i;
	char	str1[] = "Something is here";
	char	c;

	i = 0;
	c = ' ';
	while (i < 3)
	{
		printf("out[%ld]: %s\n", i, ft_split(str1, c)[i]);
		i++;
	}
	return (0);
}

// 