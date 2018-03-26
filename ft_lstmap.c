/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adveres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 18:15:26 by adveres           #+#    #+#             */
/*   Updated: 2017/12/08 17:40:00 by adveres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*compot;

	if (!lst)
		return (NULL);
	compot = f(lst);
	new = compot;
	while (lst->next)
	{
		lst = lst->next;
		if (!(compot->next = f(lst)))
		{
			free(compot->next);
			return (NULL);
		}
		compot = compot->next;
	}
	return (new);
}
