/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_buserror_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:29:24 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 21:35:10 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "libunit.h"
#include <unistd.h>

/*
	not on all platforms
*/

int	buserror_test(void)
{
	char	*s;

	s = "test";
	s[0] = '0';
	write(1, s, 1);
	return (-1);
}
