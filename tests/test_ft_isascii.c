#include "../srcs/libft.h"
#include <ctype.h>

int	test_ft_isascii(void)
{
	printf("Testing: 'a'\tOriginal: %d\t Your function: %d\n", isascii('a'), ft_isascii('a'));
	printf("Testing: 'z'\tOriginal: %d\t Your function: %d\n", isascii('z'), ft_isascii('z'));
	printf("Testing: 'A'\tOriginal: %d\t Your function: %d\n", isascii('A'), ft_isascii('A'));
	printf("Testing: 'Z'\tOriginal: %d\t Your function: %d\n", isascii('Z'), ft_isascii('Z'));
	printf("Testing: '0'\tOriginal: %d\t Your function: %d\n", isascii('0'), ft_isascii('0'));
	printf("Testing: '9'\tOriginal: %d\t Your function: %d\n", isascii('9'), ft_isascii('9'));
	printf("Testing: ':'\tOriginal: %d\t Your function: %d\n", isascii(':'), ft_isascii(':'));
	printf("Testing: '`'\tOriginal: %d\t Your function: %d\n", isascii('`'), ft_isascii('`'));

	printf("Testing: '/'\tOriginal: %d\t Your function: %d\n", isascii('/'), ft_isascii('/'));
	printf("Testing: '('\tOriginal: %d\t Your function: %d\n", isascii('('), ft_isascii('('));
	printf("Testing: ' '\tOriginal: %d\t Your function: %d\n", isascii(' '), ft_isascii(' '));
	printf("Testing: '\\t'\tOriginal: %d\t Your function: %d\n", isascii('\t'), ft_isascii('\t'));
	printf("Testing: -1\tOriginal: %d\t Your function: %d\n", isascii(-1), ft_isascii(-1));
	printf("Testing: 0\tOriginal: %d\t Your function: %d\n", isascii(0), ft_isascii(0));
	printf("Testing: 31\tOriginal: %d\t Your function: %d\n", isascii(31), ft_isascii(31));

	printf("Testing: 32\tOriginal: %d\t Your function: %d\n", isascii(32), ft_isascii(32));
	printf("Testing: 33\tOriginal: %d\t Your function: %d\n", isascii(33), ft_isascii(33));
	printf("Testing: 126\tOriginal: %d\t Your function: %d\n", isascii(126), ft_isascii(126));
	printf("Testing: 127\tOriginal: %d\t Your function: %d\n", isascii(127), ft_isascii(127));
	printf("Testing: 128\tOriginal: %d\t Your function: %d\n", isascii(128), ft_isascii(128));
	printf("Testing: 255\tOriginal: %d\t Your function: %d\n", isascii(255), ft_isascii(255));
	printf("Testing: 256\tOriginal: %d\t Your function: %d\n", isascii(256), ft_isascii(256));
	return (0);
}