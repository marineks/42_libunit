/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 02:44:16 by msabwat           #+#    #+#             */
/*   Updated: 2018/04/26 17:41:49 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*start;
	char	*temp;

	start = "0";
	temp = "0";
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		start = (char *)haystack;
		temp = (char *)needle;
		while (*haystack && *temp && *haystack == *temp)
		{
			haystack++;
			temp++;
		}
		if (!*temp)
			return (start);
		haystack = start + 1;
	}
	return (NULL);
}
