/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:10:48 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/25 12:19:37 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_itoa(t_int32 n)
{
	t_size	i;
	t_size	len;
	t_size	power;
	t_int64	nbr2;
	char	*out;

	i = 0;
	nbr2 = n;
	len = ft_intlen(n);
	power = ft_pow(10, len) / 10;
	if (n < 0)
	{
		out = malloc (len++ + 2 * sizeof(char));
		out[i++] = '-';
		nbr2 = nbr2 * -1;
	}
	else
		out = malloc (len + 1 * sizeof(char));
	while (i < len)
	{
		out[i++] = ((nbr2 / power) % 10) + '0';
		power = power / 10;
	}
	out[len] = '\0';
	return (out);
}
