/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strncat_sizezero.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:19:23 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 20:08:06 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"

int	strncat_sizezero(void)
{
	char	*result;
	char	res[20];

	res[0] = 'B';
	result = ft_strncat(res, "onjour", 0);
	if (ft_strcmp(result, "B") == 0)
		return (0);
	else
		return (-1);
}
