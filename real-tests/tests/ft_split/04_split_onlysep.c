/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_split_onlysep.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:27:43 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 21:07:18 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"

int	split_onlysep(void)
{
	char	**str;

	str = ft_split("||||||||", '|');
	if (ft_strcmp(str[0], "") == 0)
		return (0);
	else
		return (-1);
}
