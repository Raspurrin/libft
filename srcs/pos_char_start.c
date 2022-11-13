/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos_char_start.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 05:32:38 by mialbert          #+#    #+#             */
/*   Updated: 2022/11/13 05:33:04 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Finds the first occurance of char in the string 
 * and returns that position.
 */
size_t	pos_char_start(char *str, char n)
{
	size_t	len;

	len = ft_strlen(str);
	while (str[len] != n)
		len--;
	return (len);
}