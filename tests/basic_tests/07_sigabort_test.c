/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_sigabort_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 22:26:38 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 22:27:05 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "libunit.h"

/*
    in e3r2p18 (hcf is segfaulting)
*/
int	sigabort_test(void)
{
	abort();
	return (-1);
}
