#include "../srcs/libft.h"
#include <ctype.h>

int	test_ft_isalpha(void)
{
	printf("Testing: 'a'\tOriginal: %d\t Your function: %d\n", isalpha('a'), ft_isalpha('a'));
	printf("Testing: 'z'\tOriginal: %d\t Your function: %d\n", isalpha('z'), ft_isalpha('z'));
	printf("Testing: 'A'\tOriginal: %d\t Your function: %d\n", isalpha('A'), ft_isalpha('A'));
	printf("Testing: 'Z'\tOriginal: %d\t Your function: %d\n", isalpha('Z'), ft_isalpha('Z'));
	printf("Testing: '0'\tOriginal: %d\t Your function: %d\n", isalpha('0'), ft_isalpha('0'));
	printf("Testing: '9'\tOriginal: %d\t Your function: %d\n", isalpha('9'), ft_isalpha('9'));
	printf("Testing: ':'\tOriginal: %d\t Your function: %d\n", isalpha(':'), ft_isalpha(':'));
	printf("Testing: '`'\tOriginal: %d\t Your function: %d\n", isalpha('`'), ft_isalpha('`'));

	printf("Testing: '/'\tOriginal: %d\t Your function: %d\n", isalpha('/'), ft_isalpha('/'));
	printf("Testing: '('\tOriginal: %d\t Your function: %d\n", isalpha('('), ft_isalpha('('));
	printf("Testing: ' '\tOriginal: %d\t Your function: %d\n", isalpha(' '), ft_isalpha(' '));
	printf("Testing: '\\t'\tOriginal: %d\t Your function: %d\n", isalpha('\t'), ft_isalpha('\t'));
	printf("Testing: -1\tOriginal: %d\t Your function: %d\n", isalpha(-1), ft_isalpha(-1));
	printf("Testing: 0\tOriginal: %d\t Your function: %d\n", isalpha(0), ft_isalpha(0));
	printf("Testing: 31\tOriginal: %d\t Your function: %d\n", isalpha(31), ft_isalpha(31));

	printf("Testing: 32\tOriginal: %d\t Your function: %d\n", isalpha(32), ft_isalpha(32));
	printf("Testing: 33\tOriginal: %d\t Your function: %d\n", isalpha(33), ft_isalpha(33));
	printf("Testing: 126\tOriginal: %d\t Your function: %d\n", isalpha(126), ft_isalpha(126));
	printf("Testing: 127\tOriginal: %d\t Your function: %d\n", isalpha(127), ft_isalpha(127));
	printf("Testing: 128\tOriginal: %d\t Your function: %d\n", isalpha(128), ft_isalpha(128));
	printf("Testing: 255\tOriginal: %d\t Your function: %d\n", isalpha(255), ft_isalpha(255));
	printf("Testing: 256\tOriginal: %d\t Your function: %d\n", isalpha(256), ft_isalpha(256));
	return (0);
}