/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 06:05:24 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/20 12:18:11 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	nb;
	int	check;
	int	i;

	i = 0;
	nb = 0;
	check = 0;
	if ((str[i] == '\t') || (str[i] == '\r') || (str[i] == '\v')
		|| (str[i] == '\f') || (str[i] == '\n') || (str[i] == ' '))
	i++;
	if (str[i] == '-')
	{
		check = 1;
		i++;
	}
	if (str[i] == '+')
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + str[i++] - '0';
	}
	if (check == 1)
		return (-nb);
	return (nb);
}
