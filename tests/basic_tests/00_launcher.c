/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:28:49 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 22:28:52 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "libunit.h"

int	basic_launcher(void)
{
	t_unit_test	testlist;

	testlist = init_tests("BASIC TESTS");
	load_test(&testlist, "OK Test", &ok_test);
	load_test(&testlist, "KO Test", &ko_test);
	load_test(&testlist, "SIGSEGV Test", &sigsegv_test);
	load_test(&testlist, "Bus Error Test", &buserror_test);
	load_test(&testlist, "SigFpe Test", &sigfpe_test);
	load_test(&testlist, "SigIll Test", &sigill_test);
	load_test(&testlist, "SigAbort Test", &sigabort_test);
	load_test(&testlist, "SigPipe Test", &sigpipe_test);
	return (launch_tests(&testlist));
}
