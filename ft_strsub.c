/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 13:42:10 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/14 17:18:24 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char				*p;
	unsigned int		i;

	i = 0;
	p = (char *)(malloc(len - start + 1));
	while (i < len)
	{
		*(p + i) = *(s + start + i);
		i++;
	}
	return (p);
}
