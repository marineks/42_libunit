/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_sigsegv_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:29:18 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 20:33:52 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "../framework/libunit.h"

int	sigsegv_test(void)
{
	ft_putstr(NULL);
	return (-1);
}
