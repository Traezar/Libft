/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:57:33 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/14 10:27:48 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char	*p;
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	p = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) - 1);
	while (*s1 != '\0')
		*(p + i++) = *(s1 + j++);
	j = 0;
	while (*s2 != '\0')
	{
		if (j < n)
		{
			*(p + i) = *(s2 + j);
			i++;
			j++;
		}
	}
	*(p + i) = '\0';
	s1 = p;
	return (s1);
}
