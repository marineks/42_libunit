/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_split_emptystr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:27:35 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 20:55:12 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"

int	split_emptystr(void)
{
	char	**str;

	str = ft_split("\0aa\0bbb", '\0');
	if (ft_strcmp(str[0], "aa") == 0 || ft_strcmp(str[1], "bb") == 0)
		return (0);
	else
		return (-1);
}
