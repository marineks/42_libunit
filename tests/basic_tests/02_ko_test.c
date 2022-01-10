/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ko_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:29:11 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 20:29:55 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "../framework/libunit.h"

int	ko_test(void)
{
	if (&launch_tests && &load_test)
		return (-1);
	else
		return (0);
}
