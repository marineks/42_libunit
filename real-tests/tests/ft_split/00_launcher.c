/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:26:52 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 21:07:52 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "../../framework/libunit.h"

int	split_launcher(void)
{
	t_unit_test	testlist;

	testlist = init_tests("FT_SPLIT");
	load_test(&testlist, "Basic Test", &split_basic);
	load_test(&testlist, "No separator in str Test", &split_nosep);
	load_test(&testlist, "Empty string Test", &split_emptystr);
	load_test(&testlist, "Str that is made of sep only Test", &split_onlysep);
	return (launch_tests(&testlist));
}
