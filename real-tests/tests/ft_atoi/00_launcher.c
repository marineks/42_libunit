/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:11:37 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 20:08:53 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "../../framework/libunit.h"

int	atoi_launcher(void)
{
	t_unit_test	testlist;

	testlist = init_tests("FT_ATOI");
	load_test(&testlist, "Basic Test", &atoi_basic_test);
	load_test(&testlist, "Negative number Test", &atoi_neg_test);
	load_test(&testlist, "Blanks Test", &atoi_blanks_test);
	load_test(&testlist, "Int max Test", &atoi_intmax_test);
	load_test(&testlist, "Int min Test", &atoi_intmin_test);
	load_test(&testlist, "Plus sign Test", &atoi_plussign_test);
	return (launch_tests(&testlist));
}
