/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 15:29:23 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/19 22:20:01 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = n;
	if (i == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
	}
	if (i >= 10)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd(i % 10, fd);
	}
	else
		ft_putchar_fd(i + '0', fd);
}
