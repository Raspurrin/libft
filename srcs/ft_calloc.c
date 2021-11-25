/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:11:33 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/25 12:19:37 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(t_size num, t_size size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	return (ft_memset(ptr, 0, num * size));
}

	// t_size	i;
	// char	*out;

	// i = 0;
	// if (num == 0 || size == 0)
	// 	return (NULL);
	// out = malloc(num * size);
	// if (!(out))
	// 	return (NULL);
	// while (i < num)
	// {
	// 	out[i] = '\0';
	// 	i++;
	// }
	// return (out);