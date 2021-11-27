/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:46 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/25 12:37:23 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_int32	ft_strncmp(const char *str1, const char *str2, t_size n)
{
	t_size	i;
	uint8_t	*str3;
	uint8_t	*str4;

	str3 = (uint8_t *)str1;
	str4 = (uint8_t *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while (str3[i] && str4[i] && str3[i] == str4[i] && i < n - 1)
		i++;
	return (str3[i] - str4[i]);
}

// uint8_t because of this case:
// ft_print_result(ft_strncmp("test\200", "test\0", 6));