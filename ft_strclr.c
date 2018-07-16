/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 00:10:31 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/16 13:45:07 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	char *p;

	p = s;
	while (*p)
	{
		*p = '\0';
		p++;
	}
	s = NULL;
}
