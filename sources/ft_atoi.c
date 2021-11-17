/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:09:36 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/15 21:20:58 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_int32		ft_atoi(char *str)
{
	t_size i;
	t_size minus;
	t_int32 out;

	i = 0;
	minus = 0;
	out = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	while ((str[i] && str[i] == '+') || str[i] == '-')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
		out = (out * 10) + (str[i] - '0');
	if (minus % 2 == 1)
		out *= -1;
	return (out);
}