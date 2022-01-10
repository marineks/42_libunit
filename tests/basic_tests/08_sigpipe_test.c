/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_sigpipe_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 22:27:32 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 22:28:00 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "libunit.h"
#include <signal.h>
/*
    in e3r2p18 (hcf is segfaulting)
*/
int	sigpipe_test(void)
{
	raise(SIGPIPE);
	return (-1);
}
