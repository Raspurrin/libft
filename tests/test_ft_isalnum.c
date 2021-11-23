#include "../libft.h"
#include <ctype.h>

int	test_ft_isalnum(void)
{
	printf("Testing: 'a'\tOriginal: %d\t Your function: %d\n", isalnum('a'), ft_isalnum('a'));
	printf("Testing: 'z'\tOriginal: %d\t Your function: %d\n", isalnum('z'), ft_isalnum('z'));
	printf("Testing: 'A'\tOriginal: %d\t Your function: %d\n", isalnum('A'), ft_isalnum('A'));
	printf("Testing: 'Z'\tOriginal: %d\t Your function: %d\n", isalnum('Z'), ft_isalnum('Z'));
	printf("Testing: '0'\tOriginal: %d\t Your function: %d\n", isalnum('0'), ft_isalnum('0'));
	printf("Testing: '9'\tOriginal: %d\t Your function: %d\n", isalnum('9'), ft_isalnum('9'));
	printf("Testing: ':'\tOriginal: %d\t Your function: %d\n", isalnum(':'), ft_isalnum(':'));
	printf("Testing: '`'\tOriginal: %d\t Your function: %d\n", isalnum('`'), ft_isalnum('`'));

	printf("Testing: '/'\tOriginal: %d\t Your function: %d\n", isalnum('/'), ft_isalnum('/'));
	printf("Testing: '('\tOriginal: %d\t Your function: %d\n", isalnum('('), ft_isalnum('('));
	printf("Testing: ' '\tOriginal: %d\t Your function: %d\n", isalnum(' '), ft_isalnum(' '));
	printf("Testing: '\\t'\tOriginal: %d\t Your function: %d\n", isalnum('\t'), ft_isalnum('\t'));
	printf("Testing: -1\tOriginal: %d\t Your function: %d\n", isalnum(-1), ft_isalnum(-1));
	printf("Testing: 0\tOriginal: %d\t Your function: %d\n", isalnum(0), ft_isalnum(0));
	printf("Testing: 31\tOriginal: %d\t Your function: %d\n", isalnum(31), ft_isalnum(31));

	printf("Testing: 32\tOriginal: %d\t Your function: %d\n", isalnum(32), ft_isalnum(32));
	printf("Testing: 33\tOriginal: %d\t Your function: %d\n", isalnum(33), ft_isalnum(33));
	printf("Testing: 126\tOriginal: %d\t Your function: %d\n", isalnum(126), ft_isalnum(126));
	printf("Testing: 127\tOriginal: %d\t Your function: %d\n", isalnum(127), ft_isalnum(127));
	printf("Testing: 128\tOriginal: %d\t Your function: %d\n", isalnum(128), ft_isalnum(128));
	printf("Testing: 255\tOriginal: %d\t Your function: %d\n", isalnum(255), ft_isalnum(255));
	printf("Testing: 256\tOriginal: %d\t Your function: %d\n", isalnum(256), ft_isalnum(256));
	return (0);
}
