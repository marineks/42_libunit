/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 18:59:58 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 19:27:38 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int	count_nb(int nb)
{
	int	count;

	count = 1;
	if (nb < 0)
	{
		count++;
		nb = -nb;
	}
	while ((nb / 10) > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

static char	*isspecial(int num)
{
	if (num == 0)
		return (ft_strdup("0"));
	else if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

static char	*prepare_str(int n, int cnt)
{
	char	*str;

	str = NULL;
	str = (char *)malloc(sizeof(char) * (cnt + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	str[cnt] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		cnt;
	int		nbr;

	nbr = n;
	cnt = count_nb(n);
	str = isspecial(nbr);
	if (str)
		return (str);
	str = prepare_str(n, cnt);
	if (n < 0)
		n = -n;
	while (cnt > 0)
	{
		if (cnt - 1 == 0 && nbr < 0)
			return (str);
		str[cnt - 1] = (char)((n % 10) + 48);
		n = n / 10;
		cnt--;
	}
	return (str);
}
