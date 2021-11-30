/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:10:48 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/30 22:27:25 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(t_int32 nbr)
{
	char	*out;
	t_size	i;

	i = ft_intlen(nbr);
	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	out = malloc(i + 1 * sizeof(char));
	if (nbr == 0)
		out[0] = '0';
	else if (nbr < 0)
	{
		out[0] = '-';
		nbr = ft_abs(nbr);
	}
	out[i--] = '\0';
	while (nbr > 0)
	{
		out[i--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (out);
}
