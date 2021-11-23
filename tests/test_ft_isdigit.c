#include "../libft.h"
#include <ctype.h>

int	test_ft_isdigit(void)
{
	printf("Testing: 'a'\tOriginal: %d\t Your function: %d\n", isdigit('a'), ft_isdigit('a'));
	printf("Testing: 'z'\tOriginal: %d\t Your function: %d\n", isdigit('z'), ft_isdigit('z'));
	printf("Testing: 'A'\tOriginal: %d\t Your function: %d\n", isdigit('A'), ft_isdigit('A'));
	printf("Testing: 'Z'\tOriginal: %d\t Your function: %d\n", isdigit('Z'), ft_isdigit('Z'));
	printf("Testing: '0'\tOriginal: %d\t Your function: %d\n", isdigit('0'), ft_isdigit('0'));
	printf("Testing: '9'\tOriginal: %d\t Your function: %d\n", isdigit('9'), ft_isdigit('9'));
	printf("Testing: ':'\tOriginal: %d\t Your function: %d\n", isdigit(':'), ft_isdigit(':'));
	printf("Testing: '`'\tOriginal: %d\t Your function: %d\n", isdigit('`'), ft_isdigit('`'));

	printf("Testing: '/'\tOriginal: %d\t Your function: %d\n", isdigit('/'), ft_isdigit('/'));
	printf("Testing: '('\tOriginal: %d\t Your function: %d\n", isdigit('('), ft_isdigit('('));
	printf("Testing: ' '\tOriginal: %d\t Your function: %d\n", isdigit(' '), ft_isdigit(' '));
	printf("Testing: '\\t'\tOriginal: %d\t Your function: %d\n", isdigit('\t'), ft_isdigit('\t'));
	printf("Testing: -1\tOriginal: %d\t Your function: %d\n", isdigit(-1), ft_isdigit(-1));
	printf("Testing: 0\tOriginal: %d\t Your function: %d\n", isdigit(0), ft_isdigit(0));
	printf("Testing: 31\tOriginal: %d\t Your function: %d\n", isdigit(31), ft_isdigit(31));

	printf("Testing: 32\tOriginal: %d\t Your function: %d\n", isdigit(32), ft_isdigit(32));
	printf("Testing: 33\tOriginal: %d\t Your function: %d\n", isdigit(33), ft_isdigit(33));
	printf("Testing: 126\tOriginal: %d\t Your function: %d\n", isdigit(126), ft_isdigit(126));
	printf("Testing: 127\tOriginal: %d\t Your function: %d\n", isdigit(127), ft_isdigit(127));
	printf("Testing: 128\tOriginal: %d\t Your function: %d\n", isdigit(128), ft_isdigit(128));
	printf("Testing: 255\tOriginal: %d\t Your function: %d\n", isdigit(255), ft_isdigit(255));
	printf("Testing: 256\tOriginal: %d\t Your function: %d\n", isdigit(256), ft_isdigit(256));
	return (0);
}

// Testing: 128    Original: 0      Your function: 1
// Testing: 255    Original: 0      Your function: 1
// Testing: 256    Original: 0      Your function: 0