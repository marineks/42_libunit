/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:25:40 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 20:26:09 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "../framework/libunit.h"

int	main(void)
{
	ft_putstr(PURPLE);
	ft_putstr("########### BASIC TESTS LAUNCHER ###########\n");
	basic_launcher();
	return (0);
}
