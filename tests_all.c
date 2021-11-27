#include "../srcs/libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <ctype.h>

char	ft_toupper2(t_uint32 i, char c)
{
	i++;
	if ((c >= 'a' && c <= 'z'))
         return (c - ('a' - 'A'));
	return (0);
}

void	test_ft_atoi()
{	
	printf("Testing: 2147483647\tOriginal: %d\t Your function: %d\n", atoi("2147483647"), ft_atoi("2147483647"));
	printf("Testing: -2147483648\tOriginal: %d\t Your function: %d\n", atoi("-2147483648"), ft_atoi("-2147483648"));
	printf("Testing: 10\tOriginal: %d\t Your function: %d\n", atoi("10"), ft_atoi("10"));
	printf("Testing: 0\tOriginal: %d\t Your function: %d\n", atoi("0"), ft_atoi("0"));
	printf("Testing: 	-+--300\tOriginal: %d\t Your function: %d\n", atoi(" 	-+--300"), ft_atoi(" 	-+--300"));
}

void	test_ft_bzero()
{
	//  	int 	ints[] = {1, 2, 600, 345, -1};
	// 	char	str[] = "s\0mething";
	// 	char	*rslt;

	// 	printf("original: %p\t\t Your function: %p\n", bzero(ints,  sizeof(ints)), ft_bzero(ints, sizeof(ints)));
	// 	printf("original: %p\t\t Your function: %p\n", bzero(str,  10), ft_bzero(str, 10));
	// 	printf("original: %p\t\t Your function: %p\n", bzero(str,  3), ft_bzero(str, 3));
}

void	test_ft_calloc()
{
	printf("\ntest_ft_calloc:\n");
	printf("original: %s\t Your function: %s\n", (char *)calloc(3, sizeof(int)), (char *)ft_calloc(3, sizeof(int)));
	printf("original: %s\t Your function: %s\n", (char *)calloc(10, sizeof(char)), (char *)ft_calloc(10, sizeof(char)));
}

void	test_ft_intlen()
{
	printf("\ntest_ft_intlen:\n");
	printf("Your function: %ld\n", ft_intlen(35334));
	printf("Your function: %ld\n", ft_intlen(0));
	printf("Your function: %ld\n", ft_intlen(-349));
	printf("Your function: %ld\n", ft_intlen(-2147483648));
	printf("Your function: %ld\n", ft_intlen(10));
	printf("Your function: %ld\n", ft_intlen(-10));
	printf("Your function: %ld\n", ft_intlen(-1));
}

void	test_ft_isalnum()
{
	printf("\ntest_ft_isalnum:\n");
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
}

void	test_ft_isalpha()
{
	printf("\ntest_ft_isalpha:\n");
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
}

void	test_ft_isascii()
{
	printf("\ntest_ft_isascii:\n");
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
}

void	test_ft_isdigit()
{
	printf("\ntest_ft_isdigit:\n");
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
}

void	test_ft_isprint()
{
	printf("\ntest_ft_isprint:\n");
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
}

void	test_ft_itoa()
{
	printf("\ntest_ft_itoa:\n");
	printf("Right answer: 35334\t\t Your function: %s\n", ft_itoa(35334));
	printf("Right answer: 0\t\t\t Your function: %s\n", ft_itoa(0));
	printf("Right answer: -349\t\t Your function: %s\n", ft_itoa(-349));
	printf("Right answer: -2147483648\t Your function: %s\n", ft_itoa(-2147483648));
	printf("Right answer: 10\t\t Your function: %s\n", ft_itoa(10));
	printf("Right answer: -10\t\t Your function: %s\n", ft_itoa(-10));
	printf("Right answer: -1\t\t Your function: %s\n", ft_itoa(-1));
}

void	test_ft_memchr()
{
	printf("\ntest_ft_memchr:\n");
	char	str[] = "Suffer and have fun!";
	printf("Original: %p\t Your function: %p\n", memchr(str, 'a', 21), ft_memchr(str, 'a', 21));
	printf("Original: %p\t\t\t Your function: %p\n", memchr(str, 'a', 5), ft_memchr(str, 'a', 5));
	printf("Original: %p\t Your function: %p\n", memchr(str, 'S', 21), ft_memchr(str, 'S', 21));
	printf("Original: %p\t Your function: %p\n", memchr(str, 'S', 5), ft_memchr(str, 'S', 5));
	printf("Original: %p\t Your function: %p\n", memchr(str, ' ', 21), ft_memchr(str, ' ', 21));
	printf("Original: %p\t\t\t Your function: %p\n", memchr(str, ' ', 5), ft_memchr(str, ' ', 5));
}

void	test_ft_memcmp()
{
	char	str1[] = "hello";
	char	str2[] = "help";
	char	str3[] = "";
	char	str4[] = "s\0mething";
	char	str5[] = "s\0metimes";
	int ints1[] = {1, 2, 600, 345, -1};
	int ints2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("\ntest_ft_memcmp:\n");
	printf("Original: %d\t\t Your function: %d\n", memcmp(str1, str2, 5), ft_memcmp(str1, str2, 5));
	printf("Original: %d\t\t Your function: %d\n", memcmp(str1, str2, 3), ft_memcmp(str1, str2, 3));
	printf("Original: %d\t\t Your function: %d\n\n", memcmp(str1, str2, 0), ft_memcmp(str1, str2, 0));

	printf("Original: %d\t\t Your function: %d\n", memcmp(str1, str3, 5), ft_memcmp(str1, str3, 5));
	printf("Original: %d\t Your function: %d\n", memcmp(str1, str3, 3), ft_memcmp(str1, str3, 3));
	printf("Original: %d\t\t Your function: %d\n\n", memcmp(str1, str3, 0), ft_memcmp(str1, str3, 0));

	printf("Original: %d\t\t Your function: %d\n", memcmp(str4, str5, 5), ft_memcmp(str4, str5, 5));
	printf("Original: %d\t\t Your function: %d\n", memcmp(str4, str5, 3), ft_memcmp(str4, str5, 3));
	printf("Original: %d\t\t Your function: %d\n\n", memcmp(str4, str5, 0), ft_memcmp(str4, str5, 0));

	printf("Original: %d\t\t Your function: %d\n", memcmp(ints1, ints2, 5), ft_memcmp(ints1, ints2, 5));
	printf("Original: %d\t\t Your function: %d\n", memcmp(ints1, ints2, 3), ft_memcmp(ints1, ints2, 3));
	printf("Original: %d\t\t Your function: %d\n", memcmp(ints1, ints2, 0), ft_memcmp(ints1, ints2, 0));
}

void	test_ft_memcpy()
{
	char	str1[] = "hello";
	char	str2[] = "help";
	char	str3[] = "";
	char	str4[] = "s\0mething";
	char	str5[] = "s\0metimes";
	int ints1[] = {1, 2, 600, 345, -1};
	int ints2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("\ntest_ft_memcpy:\n");
	printf("Original: %p\t Your function: %p\n", memcpy(str1, str2, 5), ft_memcpy(str1, str2, 5));
	printf("Original: %p\t Your function: %p\n", memcpy(str1, str2, 3), ft_memcpy(str1, str2, 3));
	printf("Original: %p\t Your function: %p\n\n", memcpy(str1, str2, 0), ft_memcpy(str1, str2, 0));
	printf("Original: %p\t Your function: %p\n", memcpy(str1, str3, 5), ft_memcpy(str1, str3, 5));
	printf("Original: %p\t Your function: %p\n", memcpy(str1, str3, 3), ft_memcpy(str1, str3, 3));
	printf("Original: %p\t Your function: %p\n\n", memcpy(str1, str3, 0), ft_memcpy(str1, str3, 0));
	printf("Original: %p\t Your function: %p\n", memcpy(str4, str5, 5), ft_memcpy(str4, str5, 5));
	printf("Original: %p\t Your function: %p\n", memcpy(str4, str5, 3), ft_memcpy(str4, str5, 3));
	printf("Original: %p\t Your function: %p\n\n", memcpy(str4, str5, 0), ft_memcpy(str4, str5, 0));
	printf("Original: %p\t Your function: %p\n", memcpy(ints1, ints2, 5), ft_memcpy(ints1, ints2, 5));
	printf("Original: %p\t Your function: %p\n", memcpy(ints1, ints2, 3), ft_memcpy(ints1, ints2, 3));
	printf("Original: %p\t Your function: %p\n", memcpy(ints1, ints2, 0), ft_memcpy(ints1, ints2, 0));
}

void	test_ft_memmove()
{
	char	str1[] = "hello";
	char	str2[] = "help";
	char	str3[] = "";
	char	str4[] = "s\0mething";
	char	str5[] = "s\0metimes";
	int ints1[] = {1, 2, 600, 345, -1};
	int ints2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("\ntest_ft_memmove:\n");
	printf("Original: %p\t Your function: %p\n", memmove(str1, str2, 5), ft_memmove(str1, str2, 5));
	printf("Original: %p\t Your function: %p\n", memmove(str1, str2, 3), ft_memmove(str1, str2, 3));
	printf("Original: %p\t Your function: %p\n", memmove(str1, str2, 0), ft_memmove(str1, str2, 0));
	printf("Original: %p\t Your function: %p\n\n", memmove(str1, str3, 0), ft_memmove(str1, str3, 0));
	printf("Original: %p\t Your function: %p\n", memmove(str4, str5, 5), ft_memmove(str4, str5, 5));
	printf("Original: %p\t Your function: %p\n", memmove(str4, str5, 3), ft_memmove(str4, str5, 3));
	printf("Original: %p\t Your function: %p\n\n", memmove(str4, str5, 0), ft_memmove(str4, str5, 0));
	printf("Original: %p\t Your function: %p\n", memmove(ints1, ints2, 5), ft_memmove(ints1, ints2, 5));
	printf("Original: %p\t Your function: %p\n", memmove(ints1, ints2, 3), ft_memmove(ints1, ints2, 3));
	printf("Original: %p\t Your function: %p\n", memmove(ints1, ints2, 0), ft_memmove(ints1, ints2, 0));
}

void	test_ft_memset()
{
	int 	ints[] = {1, 2, 600, 345, -1};
	char	str[] = "s\0mething";

	printf("\ntest_ft_memset:\n");
	printf("original: %s\t Your function: %s\n", (char *)memset(ints, 'c', sizeof(ints)), (char *)ft_memset(ints, 'c', sizeof(ints)));
	printf("original: %s\t Your function: %s\n", (char *)memset(ints, 43, sizeof(ints)), (char *)ft_memset(ints, 43, sizeof(ints)));
	printf("original: %s\t\t Your function: %s\n", (char *)memset(str, 'a', 10), (char *)ft_memset(str, 'a', 10));
	printf("original: %s\t\t Your function: %s\n", (char *)memset(str, 'b', 3), (char *)ft_memset(str, 'b', 3));
}

void	test_ft_pow()
{
	printf("test_ft_pow:\n");
	printf("5 by the power of 5 is: %ld\n", ft_pow(5, 2));
	printf("10 by the power of 3 is: %ld\n", ft_pow(10, 3));
}

// void	test_ft_split()
// {
// 	t_size	i;
// 	char	str1[] = "Something is here";
// 	char	c;

// 	i = 0;
// 	c = ' ';
// 	while (i < 3)
// 	{
// 		printf("out[%ld]: %s\n", i, ft_split(str1, c)[i]);
// 		i++;
// 	}
// }

void	test_ft_strchr()
{
	char	str[] = "Suffer and have fun!";
	printf("test_ft_strchr:\n");
	printf("Original: %p\t Your function: %p\n", strchr(str, 'a'), ft_strchr(str, 'a'));
	printf("Original: %p\t\t\t Your function: %p\n", strchr(str, 'a'), ft_strchr(str, 'a'));
	printf("Original: %p\t Your function: %p\n", strchr(str, 'S'), ft_strchr(str, 'S'));
	printf("Original: %p\t Your function: %p\n", strchr(str, 'S'), ft_strchr(str, 'S'));
	printf("Original: %p\t Your function: %p\n", strchr(str, ' '), ft_strchr(str, ' '));
	printf("Original: %p\t\t\t Your function: %p\n", strchr(str, ' '), ft_strchr(str, ' '));
}

void	test_ft_strdup()
{
	char	str1[] = "cookie";
	char	str2[] = "something";

	printf("\ntest_ft_strdup:\n");
	printf("original: %s\t Your function: %s\n", strdup(str1), ft_strdup(str1));
	printf("original: %s\t Your function: %s\n", strdup(str2), ft_strdup(str2));
}

void	test_ft_strjoin()
{
	printf("\ntest_ft_strjoin:\n");
	char	str1[] = "I have ";
	char	str2[] = "a cookie";
	printf("Your function: %s\n", ft_strjoin(str1, str2));
}

void	test_ft_strlcat()
{
	char	str1[18] = "I have";
	char	str2[18] = "I have"; // 6
	char	str3[18] = "I have";
	char	str4[18] = "I have";
	char	str5[18] = "I have";
	char	str6[18] = "I have";
	char	str7[18] = "I have";
	char	str8[18] = "I have";
	char	str9[18] = "I have";
	char	str10[18] = "I have";
	char	str11[] = " a cookie"; // 8
	// char	str4[] = "The world will be filled with nanobots";
	// char	str5[] = "The world will be filled with nanobots";
	printf("Original: %ld \t%s\t Your function: %lu\t %s\n", strlcat(str1, str11, 9), str1, ft_strlcat(str2, str11, 9), str2);
	printf("Original: %ld \t%s\t\t Your function: %lu\t %s\n", strlcat(str3, str11, 0), str3, ft_strlcat(str4, str11, 0), str4);
	printf("Original: %ld \t%s\t Your function: %lu\t %s\n", strlcat(str5, str11, 17), str5, ft_strlcat(str6, str11, 17), str6);
	printf("Original: %ld \t%s\t\t Your function: %lu\t %s\n", strlcat(str7, str11, 5), str7, ft_strlcat(str8, str11, 5), str8);
	printf("Original: %ld \t%s\t\t Your function: %lu\t %s\n", strlcat(str9, str11, 6), str9, ft_strlcat(str10, str11, 6), str10);
}

void	test_ft_strlcpy()
{
	char	str1[] = "hello";
	char	str2[] = "help";
	char	str3[] = "";
	printf("\ntest_ft_strlcpy:\n");
	printf("Original: %lu\t Your function: %u\n", strlcpy(str1, str2, 5), ft_strlcpy(str1, str2, 5));
	printf("Original: %lu\t Your function: %u\n", strlcpy(str1, str2, 3), ft_strlcpy(str1, str2, 3));
	printf("Original: %lu\t Your function: %u\n\n", strlcpy(str1, str2, 0), ft_strlcpy(str1, str2, 0));
	printf("Original: %lu\t Your function: %u\n", strlcpy(str1, str3, 5), ft_strlcpy(str1, str3, 5));
	printf("Original: %lu\t Your function: %u\n", strlcpy(str1, str3, 3), ft_strlcpy(str1, str3, 3));
	printf("Original: %lu\t Your function: %u\n", strlcpy(str1, str3, 0), ft_strlcpy(str1, str3, 0));
}

void	test_ft_strlen()
{
	char	str1[] = "cookie";
	char	str2[] = "something";

	printf("\ntest_ft_strlen:\n");
	printf("original: %ld\t Your function: %ld\n", strlen(str1), ft_strlen(str1));
	printf("original: %ld\t Your function: %ld\n", strlen(str2), ft_strlen(str2));
}

void	test_ft_strmapi()
{
	char	str[] = "No idea";
	printf("%s", ft_strmapi(str, ft_toupper2));
}

void	test_ft_strncmp()
{
	char	str1[] = "hello";
	char	str2[] = "help";
	char	str3[] = "";
	printf("\ntest_ft_strncmp:\n");
	printf("Original: %d\t Your function: %d\n", strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));
	printf("Original: %d\t Your function: %d\n", strncmp(str1, str2, 3), ft_strncmp(str1, str2, 3));
	printf("Original: %d\t Your function: %d\n\n", strncmp(str1, str2, 0), ft_strncmp(str1, str2, 0));

	printf("Original: %d\t Your function: %d\n", strncmp(str1, str3, 5), ft_strncmp(str1, str3, 5));
	printf("Original: %d\t Your function: %d\n", strncmp(str1, str3, 3), ft_strncmp(str1, str3, 3));
	printf("Original: %d\t Your function: %d\n", strncmp(str1, str3, 0), ft_strncmp(str1, str3, 0));
}

void	test_ft_strnstr()
{
	char str1[] = "Suffer and have fun!";
	char str2[] = "Suffer and have fun!";
	// char str3[] = "Suffer and have fun!";
	// char str4[] = "Suffer and have fun!";
	char str5[] = "have";
	// char str6[] = "a";
	// char str7[] = "";
	printf("\ntest_ft_strnstr:\n");
	printf("Original: %s\t Your function: %s\n", strnstr(str1, str5, 21), ft_strnstr(str2, str5, 21));
}

void	test_ft_strrchr()
{
	char	str[] = "Suffer and have fun!";
	printf("\ntest_ft_strrchr:\n");
	printf("Original: %p\t Your function: %p\n", strrchr(str, 'a'), ft_strrchr(str, 'a'));
	printf("Original: %p\t Your function: %p\n", strrchr(str, '!'), ft_strrchr(str, '!'));
	printf("Original: %p\t Your function: %p\n", strrchr(str, 'f'), ft_strrchr(str, 'f'));
	printf("Original: %p\t Your function: %p\n", strrchr(str, 'S'), ft_strrchr(str, 'S'));
	printf("Original: %p\t Your function: %p\n", strrchr(str, 'd'), ft_strrchr(str, 'd'));
	printf("Original: %p\t\t\t Your function: %p\n", strrchr(str, 'w'), ft_strrchr(str, 'w'));
}

void	test_ft_strtrim()
{
	char	str1[] = "Something has to be trimmed from Som";
	char	str2[] = "Som";
	printf("\ntest_ft_strtrim:\n");
	printf("Your function: %s\n", ft_strtrim(str1, str2));
}

void	test_ft_substr()
{
	char	str[] = "Suffer and have fun!";
	printf("\ntest_ft_substr:\n");
	printf("Your function: %s\n", ft_substr(str, 0, 21));
	printf("Your function: %s\n", ft_substr(str, 7, 21));
	printf("Your function: %s\n", ft_substr(str, 11, 21));
	printf("Your function: %s\n", ft_substr(str, 0, 7));
}

void	test_ft_tolower()
{
	printf("\ntest_ft_tolower:\n");
	printf("Testing: 'a'\tOriginal: %d\t Your function: %d\n", tolower('a'), ft_tolower('a'));
	printf("Testing: 'z'\tOriginal: %d\t Your function: %d\n", tolower('z'), ft_tolower('z'));
	printf("Testing: 'A'\tOriginal: %d\t Your function: %d\n", tolower('A'), ft_tolower('A'));
	printf("Testing: 'Z'\tOriginal: %d\t Your function: %d\n", tolower('Z'), ft_tolower('Z'));
}

void	test_ft_toupper()
{
	printf("\ntest_ft_toupper:\n");
	printf("Testing: 'a'\tOriginal: %d\t Your function: %d\n", toupper('a'), ft_toupper('a'));
	printf("Testing: 'z'\tOriginal: %d\t Your function: %d\n", toupper('z'), ft_toupper('z'));
	printf("Testing: 'A'\tOriginal: %d\t Your function: %d\n", toupper('A'), ft_toupper('A'));
	printf("Testing: 'Z'\tOriginal: %d\t Your function: %d\n", toupper('Z'), ft_toupper('Z'));
}

void	test_ft_wcount()
{
	char	str[] = "Suffer and have fun!";
	char	str2[] = "Suffer    and	 have fun!";
	printf("\ntest_ft_wcount:\n");
	printf("Your function: %ld\n", ft_wcount(str, ' '));
	printf("Your function: %ld\n", ft_wcount(str, 'a'));
	printf("Your function: %ld\n", ft_wcount(str2, ' '));
	printf("Your function: %ld\n", ft_wcount(str2, 'a'));
}

int	main(void)
{
	test_ft_atoi();
	test_ft_bzero();
	test_ft_calloc();
	test_ft_intlen();
	test_ft_isalnum();
	test_ft_isalpha();
	test_ft_isascii();
	test_ft_isdigit();
	test_ft_isprint();
	test_ft_itoa();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_memset();
	test_ft_pow();
	// test_ft_split(); function itself doesn't work, tester's fine I think
	test_ft_strchr();
	test_ft_strdup();
	test_ft_strjoin();
	test_ft_strlcat();
	test_ft_strlcpy();
	test_ft_strlen();
	test_ft_strmapi();
	test_ft_strncmp();
	test_ft_strnstr();
	test_ft_strrchr();
	test_ft_strtrim();
	test_ft_substr();
	test_ft_tolower();
	test_ft_toupper();
	test_ft_wcount();
	return (0);
}
