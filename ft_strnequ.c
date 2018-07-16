/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 10:06:14 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/15 12:57:20 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*p1;
	char	*p2;
	size_t	i;
	int		ret;

	p1 = (char *)s1;
	p2 = (char *)s2;
	i = 0;
	ret = 0;
	while (*(p1 + i) && *(p2 + i) && (i < n))
	{
		if (*(p1 + i) == *(p2 + i))
			ret = 1;
		else
			return (0);
		i++;
	}
	return (ret);
}
