/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 08:53:13 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/18 14:28:49 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*p1;
	int		i;

	i = 0;
	p1 = (char *)malloc(ft_strlen(s) + 1);
	if (!p1 || !s)
		return (NULL);
	while (s[i] != '\0')
	{
		p1[i] = f(s[i]);
		i++;
	}
	p1[i] = '\0';
	return (p1);
}
