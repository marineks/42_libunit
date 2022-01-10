/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 16:37:38 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 19:28:30 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*get_prevword(char *s, size_t index, char delim)
{
	char	*temp;
	int		x;
	int		cnt;

	x = index - 1;
	cnt = 0;
	while (x >= 0 && s[x] != delim)
		x--;
	x++;
	temp = (char *)malloc(sizeof(char) * ((int)index - x + 1));
	if (!temp)
		return (NULL);
	while (x < (int)index)
	{
		temp[cnt] = s[x];
		cnt++;
		x++;
	}
	temp[cnt] = '\0';
	return (temp);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**result;
	int		ind;
	int		cntr1;

	ind = 0;
	cntr1 = 0;
	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_cntdelimwords(s, c) + 1));
	if (!result)
		return (NULL);
	while (s[ind])
	{
		if (ft_isword((char *)s, ind, c))
		{
			result[cntr1] = get_prevword((char *)s, ind, c);
			cntr1++;
		}
		ind++;
	}
	if (ft_isword((char *)s, ind, c))
		result[cntr1++] = get_prevword((char *)s, ind, c);
	result[cntr1] = 0;
	return (result);
}
