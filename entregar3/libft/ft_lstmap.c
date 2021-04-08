/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:31:34 by jsilva-d          #+#    #+#             */
/*   Updated: 2021/03/16 17:51:13 by jsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"i
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*current;

	head = f(lst);
	if (head == NULL)
		return (NULL);
	current = head;
	while (lst->next)
	{
		lst = lst->next;
		current->next = f(lst);
		if (current->next == NULL)
			return (NULL);
		current = current->next;
	}
	return (head);
}
