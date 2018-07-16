/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 14:36:28 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/14 13:32:03 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (src[i])
		{
			dst[i] = src[i];
			i++;
		}
		else
		{
			while (i < len)
			{
				dst[i] = '\0';
				i++;
			}
		}
	}
	return (dst);
}
