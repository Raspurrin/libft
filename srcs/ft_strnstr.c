/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:51 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/28 02:02:30 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, t_size n)
{
	t_size	i;
	t_size	j;
	t_size	start;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		if (needle[j] == haystack[i])
		{
			start = i;
			while (i < n && needle[j] && needle[j] == haystack[i])
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)haystack + start);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str1[] = "Suffer and have fun!";
// 	char str2[] = "Suffer and have fun!";
// 	// char str3[] = "Suffer and have fun!";
// 	// char str4[] = "Suffer and have fun!";
// 	char str5[] = "have";
// 	// char str6[] = "a";
// 	char str7[] = "";
// 	printf("Your function: %s\n", ft_strnstr(str1, str5, 21));
// 	printf("Your function: %s\n", ft_strnstr(str2, str7, 3));
// 	return (0);	
// }