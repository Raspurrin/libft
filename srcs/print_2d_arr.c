/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_2d_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:34:58 by mialbert          #+#    #+#             */
/*   Updated: 2022/07/14 21:56:34 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_2d_arr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		ft_printf_fd(STDOUT_FILENO, "%s\n", arr[i++]);
}
