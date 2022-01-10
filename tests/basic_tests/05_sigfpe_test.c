/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_sigfpe_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:29:30 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 20:31:47 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "libunit.h"

int	sigfpe_test(void)
{
	int	test;
	int	number;

	number = 42 - 42;
	test = 1 / number;
	ft_putnbr(test);
	return (-1);
}
