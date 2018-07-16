/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 08:14:56 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/16 10:46:42 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		d_len;
	char		*d;
	const char	*s;

	i = -1;
	d = (char *)dst;
	s = (char *)src;
	d_len = ft_strlen(dst);
	if (dstsize < d_len - 1)
		return (NULL);
	while (++i < dstsize - 1)
		d[d_len + i] = s[i];
	d[d_len + i + 1] = '\0';
	return ((void *)(ft_strlen(dst) + ft_strlen(src)));
}
