/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 04:31:56 by msabwat           #+#    #+#             */
/*   Updated: 2018/04/26 17:40:48 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)malloc(sizeof(char) * (size + 1));
	if (!p)
		return (NULL);
	while (i < size)
	{
		p[i] = '\0';
		i++;
	}
	p[i] = '\0';
	return (p);
}
