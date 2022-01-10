/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 19:47:02 by msabwat           #+#    #+#             */
/*   Updated: 2018/04/26 17:31:53 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	num;
	int	tab[10];
	int	cnt;

	cnt = 0;
	num = n;
	if (n < 0)
		ft_putchar_fd('-', fd);
	while (num / 10)
	{
		tab[cnt] = num % 10;
		num = num / 10;
		cnt++;
	}
	tab[cnt] = num;
	while (cnt >= 0)
	{
		if (n < 0)
			tab[cnt] = -tab[cnt];
		ft_putchar_fd(tab[cnt] + 48, fd);
		cnt--;
	}
}
