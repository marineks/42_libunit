/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_atoi_intmin_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:14:09 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 19:14:10 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "../../framework/libunit.h"
#include <limits.h>

int	atoi_intmin_test(void)
{
	if (ft_atoi("-2147483648") == INT_MIN)
		return (0);
	else
		return (-1);
}
