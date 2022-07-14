/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:32:55 by mialbert          #+#    #+#             */
/*   Updated: 2022/07/14 19:40:55 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int32_t	ft_uputnbr_fd(uint32_t nbr, int32_t fd)
{
	int32_t	i;
	char	c;

	i = 0;
	if (nbr < 0)
		return (0);
	if (nbr >= 10)
	{
		i += ft_uputnbr_fd(nbr / 10, fd);
		i += ft_uputnbr_fd(nbr % 10, fd);
	}
	if (nbr < 10)
	{
		c = nbr + '0';
		i += ft_putchar_fd(c, fd);
	}
	return (i);
}
