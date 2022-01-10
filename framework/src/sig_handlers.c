/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sig_handlers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:39:54 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 21:30:34 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	sig_handler(int signum)
{
	exit(signum);
}

void	handle_child_return(t_test *test, signed char status)
{
	if (status == SIGSEGV)
		test->status = STATUS_SIGSEGV;
	else if (status == SIGBUS)
		test->status = STATUS_SIGBUS;
	else if (status == SIGABRT)
		test->status = STATUS_SIGABRT;
	else if (status == SIGFPE)
		test->status = STATUS_SIGFPE;
	else if (status == SIGPIPE)
		test->status = STATUS_SIGPIPE;
	else if (status == SIGILL)
		test->status = STATUS_SIGILL;
	else if (status == 0)
		test->status = STATUS_OK;
	else if (status == -1)
		test->status = STATUS_KO;
	else
		test->status = STATUS_UNKNOWN;
}

void	handle_signals(t_test *test)
{
	signal(SIGSEGV, sig_handler);
	signal(SIGBUS, sig_handler);
	signal(SIGABRT, sig_handler);
	signal(SIGFPE, sig_handler);
	signal(SIGPIPE, sig_handler);
	signal(SIGILL, sig_handler);
	signal(SIGALRM, sig_handler);
	exit(test->pf_test());
}
