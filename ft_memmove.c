/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 00:38:27 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/14 13:28:30 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dit;
	unsigned char	*sit;
	size_t			i;

	i = 0;
	dit = (unsigned char *)dst;
	sit = (unsigned char *)src;
	while (i < len)
	{
		dit[i] = sit[i];
		i++;
	}
	return (dst);
}
