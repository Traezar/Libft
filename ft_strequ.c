/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 09:28:57 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/15 12:58:01 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	char	*p1;
	char	*p2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	p1 = (char *)s1;
	p2 = (char *)s2;
	while (*(p1 + i) && *(p2 + i))
	{
		if (*(p1 + i) == *(p2 + i))
			j = 1;
		else
			return (j);
	}
	return (j);
}
