/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:16:25 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 20:08:01 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"

int	null_test(void)
{
	if (ft_strlen("") == 0)
		return (0);
	else
		return (-1);
}
