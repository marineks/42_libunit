/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:22:29 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 19:37:55 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

static int	count_digits(uintptr_t ptr)
{
	int			count;
	uintptr_t	tmp;

	count = 1;
	tmp = ptr;
	while (tmp / 16 > 0)
	{
		tmp = tmp / 16;
		count++;
	}
	return (count);
}

void	ft_putptr(uintptr_t ptr)
{
	int			size;
	int			cnt;
	uintptr_t	tmp;
	char		*str;

	size = 0;
	str = malloc(size + 1);
	if (!str)
		return ;
	size = count_digits(ptr) + 2;
	str[0] = '0';
	str[1] = 'x';
	str[size] = '\0';
	tmp = ptr;
	cnt = size;
	while (cnt > 2)
	{
		str[cnt - 1] = "0123456789ABCDEF"[tmp % 16];
		tmp = tmp / 16;
		cnt--;
	}
	write(1, str, size);
	free(str);
}
