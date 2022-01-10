/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:20:49 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 20:37:30 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"

int	main(void)
{
	ft_putstr_fd(PURPLE, 1);
	ft_putstr_fd("########### REAL TESTS LAUNCHER ###########\n", 1);
	strlen_launcher();
	atoi_launcher();
	split_launcher();
	strncat_launcher();
	return (0);
}
