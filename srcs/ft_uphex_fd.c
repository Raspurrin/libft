/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphex_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:19:41 by mialbert          #+#    #+#             */
/*   Updated: 2022/07/14 22:06:08 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int32_t	ft_uphex_fd(uint32_t nbr, int32_t fd)
{
	int32_t		i;
	const char	hexbase[] = "0123456789ABCDEF";

	i = 0;
	if (nbr >= 16)
	{
		i += ft_uphex_fd(nbr / 16, fd);
		i += ft_uphex_fd(nbr % 16, fd);
	}
	if (nbr < 16)
		i += ft_putchar_fd(hexbase[nbr], fd);
	return (i);
}
