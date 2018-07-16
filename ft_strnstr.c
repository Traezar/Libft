/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 03:46:28 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/16 13:05:52 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		k;
	size_t		check;

	i = 0;
	while (s1[i] != '\0' && s1[j] != '\0')
	{
		if (s1[i] == s2[j])
		{
			k = i;
			j = 0;
			check = 1;
			while (s1[++k] == s2[++j] && (++check < len))
			{
				if (check == len)
					return ((char *)s1 + i);
			}
		}
	}
	return (NULL);
}
