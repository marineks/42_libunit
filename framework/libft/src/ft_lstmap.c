/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 20:02:29 by msabwat           #+#    #+#             */
/*   Updated: 2018/04/26 17:25:20 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list	*temp;
	t_list	*nlst;
	t_list	*newlst;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	nlst = ft_lstnew(temp->content, temp->content_size);
	if (!nlst)
		return (NULL);
	newlst = nlst;
	lst = lst->next;
	while (lst)
	{
		temp = f(lst);
		nlst->next = ft_lstnew(temp->content, temp->content_size);
		if (!nlst->next)
			return (NULL);
		nlst = nlst->next;
		lst = lst->next;
	}
	return (newlst);
}
