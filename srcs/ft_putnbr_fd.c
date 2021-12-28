/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:14:47 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/28 23:49:55 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int32_t nbr, int32_t fd)
{
	char	c;

	if (nbr == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = ft_abs(nbr);
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else if (nbr < 10 && nbr != -2147483648)
	{
		c = nbr + '0';
		ft_putchar_fd(c, fd);
	}
}
