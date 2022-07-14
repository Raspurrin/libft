/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:17:25 by mialbert          #+#    #+#             */
/*   Updated: 2022/07/14 22:13:04 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int32_t	ft_putstr_fd(char *str, int32_t fd)
{
	if (!str)
		return (ft_putstr_fd("(null)", fd));
	return (write(fd, str, ft_strlen(str)));
}
