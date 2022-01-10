/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strncat_nosrc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:19:51 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 20:08:11 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"

int	strncat_nosrc(void)
{
	char	*result;
	char	str[20];

	str[0] = 'B';
	result = ft_strncat(str, "", 2);
	if (ft_strcmp(result, "") == 0)
		return (0);
	else
		return (-1);
}
