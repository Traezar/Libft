/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 08:53:13 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/15 14:13:39 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*p1;
	int		i;

	i = 0;
	p1 = (char *)malloc(ft_strlen(s));
	while (p1[i])
	{
		*(p1 + i) = (*f)(*(s + i));
		i++;
	}
	return (p1);
}
