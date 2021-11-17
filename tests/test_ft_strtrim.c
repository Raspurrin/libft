#include "../libft.h"
#include <string.h>

int	main(void)
{
	char	str1[] = "Something has to be trimmed from moS";
	char	str2[] = "Som";
	printf("Your function: %s\n", ft_strtrim(str1, str2));
	return (0);
}
// seg fault!