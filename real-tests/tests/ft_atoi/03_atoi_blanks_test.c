/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_atoi_blanks_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:13:26 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 19:13:29 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "../../framework/libunit.h"

int	atoi_blanks_test(void)
{
	if (ft_atoi(" \r-9845") == -9845)
		return (0);
	else
		return (-1);
}
