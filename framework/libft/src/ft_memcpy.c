/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 20:17:28 by msabwat           #+#    #+#             */
/*   Updated: 2018/04/26 17:28:58 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*ssrc;
	char		*sdst;

	ssrc = (const char *)src;
	sdst = (char *)dst;
	if (dst == src)
		return (dst);
	while (n)
	{
		*sdst = *ssrc;
		sdst++;
		ssrc++;
		n--;
	}
	return (dst);
}
