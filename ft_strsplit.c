/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 15:11:37 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/15 14:55:52 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	**ap;
	int		i;
	int		row;
	int		col;

	i = -1;
	row = -1;
	col = -1;
	ap = malloc(ft_strlen(s));
	if (!ap || !*ap)
		return (NULL);
	while (*s)
	{
		while (s[++i] != c)
		{
			ap[row][++col] = s[i];
		}
		ap[++row][col] = '\0';
		col = 0;
	}
	free((void *)s);
	s = NULL;
	return (ap);
}
