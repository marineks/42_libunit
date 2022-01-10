/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:18:54 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 20:08:58 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "../../framework/libunit.h"

int	strncat_launcher(void)
{
	t_unit_test	testlist;

	testlist = init_tests("FT_STRNCAT");
	load_test(&testlist, "Check basic concatenation", &strncat_basic_concat);
	load_test(&testlist, "Size Zero Test", &strncat_sizezero);
	load_test(&testlist, "Empty str for dst Test", &strncat_nodst);
	load_test(&testlist, "Empty str for src Test", &strncat_nosrc);
	return (launch_tests(&testlist));
}
