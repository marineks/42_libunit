/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 20:17:28 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/08 19:56:12 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"

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
