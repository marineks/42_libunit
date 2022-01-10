/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strncat_nodst.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:19:36 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 20:08:08 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"

int	strncat_nodst(void)
{
	char	*result;
	char	*str;

	str = "";
	result = ft_strncat(str, "Bonjour", 0);
	if (ft_strcmp(result, "") == 0)
		return (0);
	else
		return (-1);
}
