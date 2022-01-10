/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_atoi_plussign_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:14:26 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 19:14:27 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "../../framework/libunit.h"

int	atoi_plussign_test(void)
{
	if (ft_atoi("+365387346") == 365387346)
		return (0);
	else
		return (-1);
}
