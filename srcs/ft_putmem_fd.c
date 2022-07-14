/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:59:03 by mialbert          #+#    #+#             */
/*   Updated: 2022/07/14 22:13:38 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int32_t	ft_putmem_fd(size_t *ptr, int32_t fd)
{
	if (!ptr)
		return (ft_putstr_fd(NULL_OUTPUT, fd));
	return (ft_putstr_fd("0x", fd) + ft_hex_fd((uint64_t)ptr, fd));
}
