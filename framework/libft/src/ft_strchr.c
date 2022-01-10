/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 01:50:54 by msabwat           #+#    #+#             */
/*   Updated: 2018/04/26 17:34:06 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;

	i = 0;
	ch = (const char)c;
	if (!s)
		return (NULL);
	while (s[i] != ch && s[i] != '\0')
		i++;
	if (s[i] == ch)
		return ((char *)&s[i]);
	return (NULL);
}
