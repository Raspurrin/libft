/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:14:29 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/17 19:27:40 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_size	ft_pow(t_int64 base, t_int32 power)
{
	t_int32	i;
	t_int64	nbr;

	i = 1;
	nbr = base;
	if (power == 1)
		return (base);
	while (i < power)
	{
		nbr = nbr * base;
		i++;
	}
	return (nbr);
}
