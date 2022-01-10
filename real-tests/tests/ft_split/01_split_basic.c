/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_split_basic.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:27:16 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 20:18:34 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"

int	split_basic(void)
{
	char	**str;

	str = ft_split(" coucou     ceci est un t e s t ", ' ');
	if (ft_strcmp(str[0], "coucou") == 0 || ft_strcmp(str[1], "ceci") == 0 \
		|| ft_strcmp(str[2], "est") == 0 || ft_strcmp(str[3], "un") == 0 \
		|| ft_strcmp(str[4], "un") == 0 || ft_strcmp(str[5], "t") == 0 \
		|| ft_strcmp(str[6], "e") == 0 || ft_strcmp(str[7], "s") == 0 \
		|| ft_strcmp(str[8], "t") == 0)
		return (0);
	else
		return (-1);
}
