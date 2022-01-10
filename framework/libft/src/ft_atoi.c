/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 03:28:30 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 19:28:47 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	toskip(char c)
{
	if ((c <= 32 && c != 27 && c != '\200') && c != '\0')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	cnt;
	int	number;
	int	s;

	s = 0;
	number = 0;
	cnt = 0;
	while (toskip(str[cnt]))
		cnt++;
	if (str[cnt] == '+' && str[cnt + 1] >= '0' && str[cnt + 1] <= '9')
		cnt++;
	if (str[cnt] == '-' && str[cnt + 1] >= '0' && str[cnt + 1] <= '9' && s == 0)
	{
		cnt++;
		s = 1;
	}
	while ((str[cnt] >= '0' && str[cnt] <= '9') && str[cnt] != '\0')
	{
		if (s == 0)
			number = 10 * number + str[cnt] - 48;
		else
			number = 10 * number - str[cnt] + 48;
		cnt++;
	}
	return (number);
}
