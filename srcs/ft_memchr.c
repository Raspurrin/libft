/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:13:51 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/30 17:47:57 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, t_int32 c, t_size n)
{
	t_uint8	*ptr2;

	ptr2 = (t_uint8 *)ptr;
	while (n-- > 0)
	{
		if (*ptr2 == (t_uint8)c)
			return ((void *)ptr2);
		ptr2++;
	}
	return (0);
}

//if (ptr[i] == c) yields the wrong results. Why?
// void		*ft_memchr(const void *ptr, int32_t c, t_size n)
// {
// 	t_size i;
// 	t_size len;
// 	char *ptr2;

// 	i = 0;
// 	ptr2 = (char *)ptr;
// 	len = ft_strlen(ptr2);
// 	while (ptr2[i] != c && i < n && i < len)
// 		i++;
// 	ptr2 = ptr2 + i;
// 	if (*ptr2 == c)
// 		return ((void *)ptr2);
// 	return (NULL);
// }