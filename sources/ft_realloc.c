/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:18:38 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/17 19:44:33 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_realloc(void *ptr, t_size size)
{
	t_size	i;
	char	*out;
	char	*ptr2;

	i = 0;
	out = malloc(size);
	ptr2 = (char *)ptr;
	while (i < size)
	{
		out[i] = ptr2[i];
		i++;
	}
	return (out);
}
