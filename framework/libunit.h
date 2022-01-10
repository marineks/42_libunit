/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:31:40 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 18:42:25 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdio.h>
# include <stdint.h>
# include "libft/libft.h"
# include <sys/wait.h>
# include <sys/types.h>

typedef enum e_status {
	STATUS_OK,
	STATUS_KO,
	STATUS_SIGSEGV,
	STATUS_SIGBUS,
	STATUS_SIGABRT,
	STATUS_SIGFPE,
	STATUS_SIGPIPE,
	STATUS_SIGILL,
	STATUS_SIGALRM,
	STATUS_UNKNOWN
}	t_status;

typedef struct s_test {
	int			(*pf_test)(void);
	char		*testname;
	t_status	status;
}	t_test;

typedef struct s_unit_test {
	size_t		size;
	const char	*function_name;
	t_list		*head;
}	t_unit_test;

t_unit_test		init_tests(const char *function_name);
int				launch_tests(t_unit_test *tests);
void			load_test(t_unit_test *tests,
					const char *testname, int (*pf_test)(void));
#endif