#include "../srcs/libft.h"
#include <ctype.h>

int	test_ft_isprint(void)
{
	printf("Testing: 'a'\tOriginal: %d\t Your function: %d\n", isprint('a'), ft_isprint('a'));
	printf("Testing: 'z'\tOriginal: %d\t Your function: %d\n", isprint('z'), ft_isprint('z'));
	printf("Testing: 'A'\tOriginal: %d\t Your function: %d\n", isprint('A'), ft_isprint('A'));
	printf("Testing: 'Z'\tOriginal: %d\t Your function: %d\n", isprint('Z'), ft_isprint('Z'));
	printf("Testing: '0'\tOriginal: %d\t Your function: %d\n", isprint('0'), ft_isprint('0'));
	printf("Testing: '9'\tOriginal: %d\t Your function: %d\n", isprint('9'), ft_isprint('9'));
	printf("Testing: ':'\tOriginal: %d\t Your function: %d\n", isprint(':'), ft_isprint(':'));
	printf("Testing: '`'\tOriginal: %d\t Your function: %d\n", isprint('`'), ft_isprint('`'));

	printf("Testing: '/'\tOriginal: %d\t Your function: %d\n", isprint('/'), ft_isprint('/'));
	printf("Testing: '('\tOriginal: %d\t Your function: %d\n", isprint('('), ft_isprint('('));
	printf("Testing: ' '\tOriginal: %d\t Your function: %d\n", isprint(' '), ft_isprint(' '));
	printf("Testing: '\t'\tOriginal: %d\t Your function: %d\n", isprint('\t'), ft_isprint('\t'));
	printf("Testing: -1\tOriginal: %d\t Your function: %d\n", isprint(-1), ft_isprint(-1));
	printf("Testing: 0\tOriginal: %d\t Your function: %d\n", isprint(0), ft_isprint(0));
	printf("Testing: 31\tOriginal: %d\t Your function: %d\n", isprint(31), ft_isprint(31));

	printf("Testing: 32\tOriginal: %d\t Your function: %d\n", isprint(32), ft_isprint(32));
	printf("Testing: 33\tOriginal: %d\t Your function: %d\n", isprint(33), ft_isprint(33));
	printf("Testing: 126\tOriginal: %d\t Your function: %d\n", isprint(126), ft_isprint(126));
	printf("Testing: 127\tOriginal: %d\t Your function: %d\n", isprint(127), ft_isprint(127));
	printf("Testing: 128\tOriginal: %d\t Your function: %d\n", isprint(128), ft_isprint(128));
	printf("Testing: 255\tOriginal: %d\t Your function: %d\n", isprint(255), ft_isprint(255));
	printf("Testing: 256\tOriginal: %d\t Your function: %d\n", isprint(256), ft_isprint(256));
	return (0);
}

// error: implicit declaration of function ‘isprint’ [-Werror=implicit-function-declaration]
//     6 |  printf("Testing: 'a'\tOriginal: %d\t Your function: %d\n", isprint('a'), ft_isprint('a'));