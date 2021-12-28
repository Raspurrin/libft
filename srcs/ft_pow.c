/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:14:29 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/29 00:03:28 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_pow(int64_t base, int32_t power)
{
	int32_t	i;
	int64_t	nbr;

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
