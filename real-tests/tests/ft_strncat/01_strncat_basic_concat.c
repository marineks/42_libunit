/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strncat_basic_concat.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:19:14 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 20:08:04 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"

int	strncat_basic_concat(void)
{
	char	*result;
	char	res[20];

	res[0] = 'B';
	result = ft_strncat(res, "onjour", 13);
	if (ft_strcmp(result, "Bonjour") == 0)
		return (0);
	else
		return (-1);
}
