/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:19:40 by mialbert          #+#    #+#             */
/*   Updated: 2021/11/15 21:19:41 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*ft_strmapi(char const *str, char (*f)(t_uint32, char))
{
	t_size	i;
	t_size	size;
	char	*out;

	i = 0;
	out = malloc(ft_strlen(str) + 1 * sizeof(char));
	while (str[i])
	{
		out[i] = f(i, str[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}