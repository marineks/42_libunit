/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:15:24 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 20:08:41 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "../../framework/libunit.h"

int	strlen_launcher(void)
{
	t_unit_test	testlist;

	testlist = init_tests("FT_STRLEN");
	load_test(&testlist, "Basic Test", &basic_test);
	load_test(&testlist, "Null Test", &null_test);
	load_test(&testlist, "Bigger String Test", &bigger_str_test);
	return (launch_tests(&testlist));
}
