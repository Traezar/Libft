/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:03:10 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/15 19:52:31 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_int_length(int n)
{
	size_t	i;

	i = 0;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	int		count;
	int		size;
	char	*p;

	size = n;
	count = get_int_length(n);
	p = (char *)(malloc(count + 1));
	if (!p)
		return (NULL);
	while (count < 0)
	{
		p[count + 1] = '\0';
		p[count] = (n % 10) + '0';
		n = n / 10;
	}
	return (p);
}
