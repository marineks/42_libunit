/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_results.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:15:32 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 21:27:37 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libunit.h"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define RESET "\033[0;0m"

static void	print_status(int status, char *COLOR)
{
	ft_putstr(COLOR);
	if (status == STATUS_OK)
		ft_putstr("[OK]");
	else if (status == STATUS_KO)
		ft_putstr("[KO]");
	else if (status == STATUS_SIGSEGV)
		ft_putstr("[SEGV]");
	else if (status == STATUS_SIGBUS)
		ft_putstr("[BUS]");
	else if (status == STATUS_SIGABRT)
		ft_putstr("[ABRT]");
	else if (status == STATUS_SIGFPE)
		ft_putstr("[FPE]");
	else if (status == STATUS_SIGPIPE)
		ft_putstr("[PIPE]");
	else if (status == STATUS_SIGILL)
		ft_putstr("[ILL]");
	ft_putstr(RESET);
}

static void	print_test_summary(t_test *test, t_unit_test *tests)
{
	ft_putstr(tests->function_name);
	ft_putstr(": ");
	ft_putstr(test->testname);
	ft_putstr(" : ");
	if (test->status == STATUS_OK)
		print_status(test->status, GREEN);
	else if (test->status == STATUS_KO)
		print_status(test->status, RED);
	else
		print_status(test->status, YELLOW);
	ft_putstr("\n");
}

static void	display_stats(int total_count, int failed_test)
{
	if (failed_test)
		ft_putstr(RED);
	else
		ft_putstr(GREEN);
	ft_putstr("\n");
	ft_putnbr(total_count - failed_test);
	ft_putstr("/");
	ft_putnbr(total_count);
	ft_putstr(" tests passed ");
	if (failed_test)
		ft_putstr("👀\n\n");
	else
		ft_putstr("🎉🎉🎉🎉\n\n");
	ft_putstr(RESET);
}

void	print_result(t_unit_test *tests)
{
	int		total_count;
	int		failed_test;
	t_list	*current;
	t_test	*test;

	total_count = 0;
	failed_test = 0;
	ft_putstr("-----------------------------------\n             ");
	ft_putstr(CYAN);
	ft_putstr(tests->function_name);
	ft_putstr("\n\n");
	ft_putstr(RESET);
	current = tests->head;
	while (current)
	{
		test = (t_test *)current->content;
		print_test_summary(test, tests);
		if (test->status != STATUS_OK)
			failed_test++;
		current = current->next;
		total_count++;
	}
	display_stats(total_count, failed_test);
	ft_putstr("-----------------------------------\n");
}
