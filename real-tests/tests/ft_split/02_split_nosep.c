/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_split_nosep.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:27:21 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 20:54:59 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"

int	split_nosep(void)
{
	char	**str;

	str = ft_split(" coucou     ceci est un t e s t ", 'K');
	if (ft_strcmp(str[0], " coucou     ceci est un t e s t ") == 0)
		return (0);
	else
		return (-1);
}
