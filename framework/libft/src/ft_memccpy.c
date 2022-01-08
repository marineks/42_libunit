/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 20:51:50 by msabwat           #+#    #+#             */
/*   Updated: 2018/04/26 17:28:15 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*ssrc;
	char	*sdst;

	ssrc = (char *)src;
	sdst = (char *)dst;
	while (n)
	{
		if (*ssrc == (char)c)
		{
			*sdst = (char)c;
			return (sdst + 1);
		}
		*sdst = *ssrc;
		ssrc++;
		sdst++;
		n--;
	}
	return (NULL);
}
