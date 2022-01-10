/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ok_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:29:02 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 21:10:56 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "../framework/libunit.h"

int	ok_test(void)
{
	if (&launch_tests && &load_test)
		return (0);
	else
		return (-1);
}
