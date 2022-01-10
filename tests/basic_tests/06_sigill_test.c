/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_sigill_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:29:36 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 20:56:30 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "libunit.h"

/*
    in e3r2p18 (hcf is segfaulting)
*/
int	sigill_test(void)
{
	__asm__("ud2");
	return (-1);
}
