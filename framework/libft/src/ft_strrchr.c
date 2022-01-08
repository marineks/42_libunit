/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 02:08:07 by msabwat           #+#    #+#             */
/*   Updated: 2018/04/26 17:41:19 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;
	char			*temp;

	i = 0;
	temp = NULL;
	ch = (const char)c;
	while (s[i])
	{
		if (s[i] == ch)
			temp = (char *)&s[i];
		i++;
	}
	if (s[i] == ch)
		temp = (char *)&s[i];
	return (temp);
}
