/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_atoi_basic_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:12:58 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 19:13:01 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "../../framework/libunit.h"

int	atoi_basic_test(void)
{
	if (ft_atoi("47") == 47)
		return (0);
	else
		return (-1);
}
