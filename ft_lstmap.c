/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsathiad <3kiraj@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 17:24:35 by rsathiad          #+#    #+#             */
/*   Updated: 2018/07/15 17:43:36 by rsathiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_head;

	new_head = (t_list *)malloc(sizeof(t_list));
	new_head = lst;
	while (new_head->next != NULL)
	{
		new_head = f(new_head);
		new_head = new_head->next;
	}
	return (new_head);
}
