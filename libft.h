/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:15:10 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/17 20:33:17 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
//# include <stdint.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
//# include <stdbool.h>

# define false 0
# define true 1
typedef	int bool;
typedef unsigned int t_uint32;
typedef signed int t_int32;
typedef unsigned long int t_size;
typedef long long unsigned int t_uint64;
typedef long long signed int t_int64;

/**
 * @param content : The data contained in the element. The void * allows to store any kind of data.
 * @param next : The next element’s address or NULL if it’s the last element.
 */
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

/**
 * Checks if c is a space.
 * @param c The character.
 * @return Whether c is a space.
 */
bool		ft_isspace(t_int32 c);
/**
 * Checks if c is an alphabetical character.
 * @param c The character.
 * @return Whether c is an alphabetical character.
 */
bool		ft_isalpha(t_int32 c);
/**
 * Checks if c is a number.
 * @param c The character.
 * @return Whether c is a number.
 */
bool		ft_isdigit(t_int32 c);
/**
 * Checks if c is a alpha numeric character (alphabetic or number)
 * @param c The character.
 * @return Whether c is a alphanumeric character.
 */
bool		ft_isalnum(t_int32 c);
/**
 * Checks if c is an ASCII character.
 * @param c The character.
 * @return Whether c is an ASCII character.
 */
bool		ft_isascii(t_int32 c);
/**
 * Checks if c is a printable character.
 * @param c The character.
 * @return Whether c is a a printable character.
 */
bool		ft_isprint(t_int32 c);
//
//---------------------------------------------------------------
//
/** 
 * Checks the length of str.
 * @param str A string.
 * @return The length of the string.
 */
t_size		ft_strlen(char *str);
/** 
 * Fills src up to n with c.
 * @param src Appointed memory to be filled.
 * @param c Byte to fill src with.
 * @param n The amount of bytes the memory is filled with c.
 * @return A pointer to the memory area of src.
 */
void		*ft_memset(void *src, t_int32 c, t_size n);
/** 
 * Fills src up to n with null terminators.
 * @param src Appointed memory to be filled.
 * @param n The amount of bytes the memory is filled with null terminators.
 * @return A pointer to the memory area of src.
 */
void		*ft_bzero(void *src, t_size n);
/** 
 * Copies n bytes from memory area src to memory area dest. Memory areas may not overlap
 * @param dst Appointed memory to be filled.
 * @param src Memory area to be copied from.
 * @param n The amount of bytes copied from src to dest.
 * @return A pointer to the memory area of dest.
 */
void		*ft_memcpy(void *dst, const void *src, t_size n);
/** 
 * Copies n bytes from memory area src to memory area dest. Memory areas may overlap
 * @param dst Appointed memory to be filled.
 * @param src Memory area to be copied from.
 * @param n The amount of bytes copied from src to dest.
 * @return A pointer to the memory area of dest.
 */
void		*ft_memmove(void *dst, const void *src, t_size n);
//
//---------------------------------------------------------------
//
/**
 * Copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result. as long as size is larger than 0. A byte for NUL should be included in size. Src must be NUL-terminated.
 * @param dest Where src is to be copied to.
 * @param src The string to be copied to dest.
 * @param size How many characters are to be copied.
 * @return The total length of the string it tried to create: the initial length of dst plus the length of src.
 */
t_uint32	ft_strlcpy(char *dst, const char *src, t_size size);
/**
 * Appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
 * @param dest The string that is to be appended upon. 
 * @param src The string that is to be appended to dest.
 * @param size How many characters are to be appended to dest.
 * @return The total length of the string it tried to create: the length of src.
 */
t_size		ft_strlcat(char *dst, const char *src, t_size size);
/**
 * Converts lowercase letters to uppercase.
 * @param c Letter to be converted if it is lowercase.
 * @return An uppercase letter.
 */
t_int32		ft_toupper(t_int32 c);
/**
 * Converts uppercase letters to lowercase.
 * @param c Letter to be converted if it is uppercase.
 * @return A lowercase letter.
 */
t_int32		ft_tolower(t_int32 c);
/**
 * Returns a pointer to the first occurance of c in str.
 * @param str String in which the character will be searched.
 * @param c Character to be searched for in the string.
 * @return A pointer to the first occurance of c in str.
 */
char		*ft_strchr(const char *str, t_int32 c);
/**
 * Returns a pointer to the last occurance of c in str.
 * @param str String in which the character will be searched.
 * @param c Character to be searched for in the string.
 * @return A pointer to the last occurance of c in str.
 */
char		*ft_strrchr(const char *str, t_int32 c);
/**
 * Compares str1 and str2 up to n bytes.
 * @param str1 First string to be compared.
 * @param str2 Second string to be compared.
* @param n Amount of bytes to be compared.
 * @return < 0 if str1 is less than str2, > 0 if str2 is less than str1, 0 if they are equal.
 */
t_int32		ft_strncmp(const char *str1, const char *str2, t_size n);
/**
 * Searches for the first occurance of c in ptr up to n. Checks a memory area instead of just a string and checks after null terminators.
 * @param ptr Memory area in which the character will be searched.
 * @param value Value to be located.
 * @param n Number of bytes to be analyzed.
 * @return A pointer to the first occurance of c in str or NULL if t he character does not occur.
 */
void		*ft_memchr(const void *ptr, t_int32 c, t_size n);
/**
 * Compares str1 and str2 up to n bytes. It differs from strcmp in that it compares not just strings and it continues to check after null terminators.
 * @param ptr1 First memory area to be compared.
 * @param ptr2 Second memory area to be compared.
 * @param n Amount of bytes to be compared.
 * @return < 0 if str1 is less than str2, > 0 if str2 is less than str1, 0 if they are equal.
 */
t_int32		ft_memcmp(const void *ptr1, const void *ptr2, t_size n);
/**
 * Checks if the entirity of the needle occurs in the haystack up to n bytes.
 * @param needle The string that has to be searched for in the haystack
 * @param haystack The string that has to be searched in.
 * @param n Number of bytes to be analyzed.
 * @return A pointer to the first character of the first occurance of needle in the haystack. NULL if haystack doesn't occur anywhere. Haystack if needle is empty.
 */
char		*ft_strnstr(const char *haystack, const char *needle, t_size n);
/**
 * Converts a string to integers.
 * @param str The string to be converted.
 * @return The converted value or 0 on error.
 */
t_int32		ft_atoi(char *str);
/**
 * Allocates memory for an array of num objects of size and initializes all bytes in the allocated storage to zero.
 * @param num Number of objects.
 * @param size Size of each object.
 * @return If allocation succeeds return a pointer to the first allocated byte that is suitably aligned for any object type. On failure, returns a null pointer.
 */
void		*ft_calloc(t_size num, t_size size);
/**
 * Copies str to a new memory location and returns a pointer to that string.
 * @param str The string to be duplicated.
 * @return A pointer to a new memory location with the duplicated string.
 */
char		*ft_strdup(const char *str);
//
//---------------------------------------------------------------
// Additional functions:
/**
 * Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
 * @param str The string from which to create the substring.
 * @param start The start index of the substring in the string ’s’.
 * @param len The maximum length of the substring.
 * @return The substring. NULL if the allocation fails.
 */
char		*ft_substr(char const *str, t_uint32 start, t_size len);
/**
 * Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
 * @param str1 The prefix string.
 * @param str2 The suffix string.
 * @return The new string. NULL if the allocation fails.
 */
char		*ft_strjoin(char const *str1, char const *str2);
/**
 * Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
 * @param str1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return The trimmed string. NULL if the allocation fails.
 */
char		*ft_strtrim(char const *str1, char const *set);
/**
 * Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.
 * @param str The string to be split.
 * @param c The delimiter character.
 * @return The array of new strings resulting from the split. NULL if the allocation fails.
 */
char		**ft_split(char const *str, char c);
/**
 * Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
 * @param n the integer to convert.
 * @return The string representing the integer. NULL if the allocation fails.
 */
char		*ft_itoa(t_int32 n);
/**
 * Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.
 * @param str The string on which to iterate.
 * @param f The function to apply to each character.
 * @return The string created from the successive applications of ’f’. Returns NULL if the allocation fails.
 */
char		*ft_strmapi(char const *str, char (*f)(t_uint32, char));
/**
 * Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary
 * @param str The string on which to iterate.
 * @param f The function to apply to each character.
 * @return None.
 */
void		ft_striteri(char *str, void (*f)(t_uint32, char*));
/**
 * Outputs the character ’c’ to the given file descriptor.
 * @param str The character to output.
 * @param f The file descriptor on which to write.
 * @return None.
 */
void		ft_putchar_fd(char c, t_int32 fd);
/**
 * Outputs the string ’s’ to the given file descriptor.
 * @param str The string to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void		ft_putstr_fd(char *str, t_int32 fd);
/**
 * Outputs the string ’s’ to the given file descriptor, followed by a newline.
 * @param str The string to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void		ft_putendl_fd(char *str, t_int32 fd);
/**
 * Outputs the integer ’n’ to the given file descriptor.
 * @param nbr The integer to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void		ft_putnbr_fd(t_int32 nbr, t_int32 fd);
/**
 * Counts the words in a string
 * @param str 
 * @param del 
 * @return 
 */
t_size		ft_wcount(const char *str, char del);
/**
 * Counts the length of an integer
 * @param nbr
 * @return 
 */
t_size	ft_intlen(t_int32 nbr);
/**
 * calculates the power of a number
 * @param base
 * @param power
 * @return 
 */
t_size	ft_pow(t_int64 base, t_int32 power);
/**
 * Resizes memory that has been allocated through malloc or calloc.
 * @param ptr
 * @param size
 * @return 
 */
void	*ft_realloc(void *ptr, t_size size);
//---------------------------------------------------------------------------------------------
// Bonus content: 
/**
 * Allocates (with malloc(3)) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
 * @param content The content to create the new element with.
 * @return The new element.
 */
t_list *ft_lstnew(void *content);
/**
 * Adds the element ’new’ at the beginning of the list.
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the element to be added to the list.
 * @return None
 */
void ft_lstadd_front(t_list **lst, t_list *new);
/**
 * Counts the number of elements in a list.
 * @param lst The beginning of the list.
 * @return Length of the list.
 */
int ft_lstsize(t_list *lst);
/**
 * Returns the last element of the list.
 * @param lst The beginning of the list.
 * @return Last element of the list.
 */
t_list *ft_lstlast(t_list *lst);
/**
 * Adds the element ’new’ at the end of the list.
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the element to be added to the list.
 * @return
 */
void ft_lstadd_back(t_list **lst, t_list *new);
/**
 * Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed.
 * @param lst The element to free.
 * @param del The address of the function used to delete the content.
 * @return None.
 */
void ft_lstdelone(t_list *lst, void (*del)(void*));
/**
 * Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.
 * @param lst The adress of a pointer to an element.
 * @param del The adress of the function used to delete the content of the element.
 * @return None
 */
void ft_lstclear(t_list **lst, void (*del)(void*));
/**
 * Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
 * @param lst The adress of a pointer to an element.
 * @param f The adress of the function used to iterate on the list.
 * @return None.
 */
void ft_lstiter(t_list *lst, void (*f)(void *));
/**
 * Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.
 * @param lst The adress of a pointer to an element.
 * @param f The adress of the function used to iterate on the list.
 * @param del The adress of the function used to delete the content of an element if needed.
 * @return The new list. NULL if the allocation fails.
 */
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif

// DEST = -o $(NAME) #you are a good boi don't worry.
// #all : 
// #	gcc $(CFLAGS) $(SRCS) $(DEST) && ./$(NAME)