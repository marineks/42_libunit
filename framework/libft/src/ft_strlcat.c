/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:01:42 by msabwat           #+#    #+#             */
/*   Updated: 2018/04/26 17:37:17 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstl;
	size_t	srcl;

	i = 0;
	j = 0;
	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (size <= dstl)
		return (srcl + size);
	while ((dst[i] != '\0') && i < (size - 1))
		i++;
	while (src[j] && i < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstl + srcl);
}
