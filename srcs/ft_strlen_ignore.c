/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_ignore.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:06:24 by mialbert          #+#    #+#             */
/*   Updated: 2022/07/17 21:08:43 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_ignore(const char *str, char ignore)
{
	int32_t	i;
	int32_t	ignore;

	i = 0;
	ignore = 0;
	while (str[i] != '\0')
	{
		if (str[i++] == ignore)
			ignore++;
	}
	return (i - ignore);
}
