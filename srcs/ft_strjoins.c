/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoins.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:28:46 by mialbert          #+#    #+#             */
/*   Updated: 2022/11/21 11:57:43 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdarg.h>
#include <stdio.h>

char	*ft_strjoins(char *join(), ...)
{
	size_t	len;
	size_t	old_len;
	char	*out;
	char	*str;
	va_list	argp;

	va_start(argp, join);
	str = va_arg(argp, char *);
	len = ft_strlen(str);
	out = ft_strdup("");
	while (str)
	{
		old_len = len;
		out = join(out, str);
		str = va_arg(argp, char *);
		if (str)
			len += ft_strlen(str);
	}
	return (out);
}
