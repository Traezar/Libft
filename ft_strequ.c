/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 09:28:57 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/19 22:07:49 by rsathiad         ###   ########.fr       */
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
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	if (s1[i] == '\0' || s2[i] == '\0')
		return (0);
	while (p1[i] != '\0' && p2[i] != '\0')
	{
		if (p1[i] == p2[i])
			j = 1;
		else
			return (0);
		i++;
	}
	return (j);
}
