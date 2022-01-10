/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:43:35 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 19:14:34 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_unit_test	init_tests(const char *name)
{
	t_unit_test	unit_test;

	unit_test.size = 0;
	unit_test.function_name = name;
	unit_test.head = NULL;
	return (unit_test);
}

static t_test	*init_test(const char *testname, int (*pf_test)(void))
{
	t_test	*test;

	test = malloc(sizeof(t_test));
	if (!test)
		return (NULL);
	test->pf_test = pf_test;
	test->testname = strdup(testname);
	if (!test->testname)
		return (NULL);
	test->status = STATUS_UNKNOWN;
	return (test);
}

static t_unit_test	init_unit_tests(size_t size, const char *name, t_list *node)
{
	t_unit_test	tests;

	tests.size = size;
	tests.function_name = name;
	tests.head = node;
	return (tests);
}

void	load_test(t_unit_test *tests,
		const char *testname, int (*pf_test)(void))
{
	t_test	*test;
	t_list	*node;
	t_list	*current;

	node = NULL;
	current = NULL;
	test = init_test(testname, pf_test);
	if (!test)
		return ;
	if (!tests->size)
	{
		node = ft_lstnew(test, sizeof(t_test));
		if (!node)
			return ;
		*tests = init_unit_tests(1, tests->function_name, node);
	}
	else
	{
		current = tests->head;
		while (current->next)
			current = current->next;
		ft_lstadd(&current, ft_lstnew(test, sizeof(t_test)));
		tests->size += 1;
	}
}
