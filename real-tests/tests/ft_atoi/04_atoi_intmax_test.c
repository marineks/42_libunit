/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_atoi_intmax_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:13:56 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 19:13:57 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "../../framework/libunit.h"
#include <limits.h>

int	atoi_intmax_test(void)
{
	if (ft_atoi("2147483647") == INT_MAX)
		return (0);
	else
		return (-1);
}
