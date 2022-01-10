/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 18:41:18 by msabwat           #+#    #+#             */
/*   Updated: 2018/04/26 17:24:02 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstcmp(t_list *l1, t_list *l2)
{
	while (l1 && l1->content == l2->content)
	{
		l1 = l1->next;
		l2 = l2->next;
	}
	return (l1->content - l2->content);
}
