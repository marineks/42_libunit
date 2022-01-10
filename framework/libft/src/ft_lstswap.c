/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:22:33 by msabwat           #+#    #+#             */
/*   Updated: 2018/04/26 17:25:47 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstswap(t_list *lst_a, t_list *lst_b)
{
	t_list	*temp;

	temp = ft_lstnew(lst_a->content, lst_a->content_size);
	lst_a->content = lst_b->content;
	lst_a->content_size = lst_b->content_size;
	lst_b->content = temp->content;
	lst_b->content_size = temp->content_size;
	free(temp);
}
