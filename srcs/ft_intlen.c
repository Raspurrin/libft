/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:13:51 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/29 00:03:28 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(int32_t nbr)
{
	size_t	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		if (nbr == -2147483648)
			return (11);
		i++;
		nbr = ft_abs(nbr);
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}
