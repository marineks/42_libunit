/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:43:54 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 19:14:58 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include "libunit.h"

void	print_result(t_unit_test *tests);
void	handle_child_return(t_test *test, signed char status);
void	handle_signals(t_test *test);

static void	free_test(void *test, size_t s)
{
	t_test	*t;

	(void)s;
	t = (t_test *) test;
	if (t->testname)
		ft_strdel(&(t->testname));
	if (test)
		free(test);
}

static void	free_ressources(pid_t *pid, t_unit_test *tests)
{
	free(pid);
	if (tests->head)
		ft_lstdel(&(tests->head), free_test);
}

int	launch_tests(t_unit_test *tests)
{
	pid_t	*pid;
	pid_t	*to_free;
	int		status;
	t_list	*current;

	pid = (pid_t *)malloc(sizeof(int) * tests->size);
	current = tests->head;
	if ((!pid) || (!tests))
		return (-1);
	to_free = pid;
	while (current)
	{
		*pid = fork();
		if (*pid == 0)
			handle_signals((t_test *)current->content);
		wait(&status);
		handle_child_return((t_test *)current->content,
			(signed char)WEXITSTATUS(status));
		current = current->next;
		pid++;
	}
	print_result(tests);
	free_ressources(to_free, tests);
	return (0);
}
