/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 22:02:58 by msabwat           #+#    #+#             */
/*   Updated: 2018/04/26 17:28:29 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptos;

	ptos = (char *)s;
	while (n)
	{
		if (*ptos == (char)c)
		{
			return (ptos);
		}
		ptos++;
		n--;
	}
	return (NULL);
}
