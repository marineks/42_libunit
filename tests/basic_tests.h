/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_tests.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:27:39 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 22:30:12 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASIC_TESTS_H
# define BASIC_TESTS_H

# include <unistd.h>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define PURPLE "\033[1;35m"
# define CYAN "\033[1;36m"
# define WHITE "\033[1;37m"
# define RESET "\033[0;0m"

int	basic_launcher(void);
int	ok_test(void);
int	ko_test(void);
int	sigsegv_test(void);
int	buserror_test(void);
int	sigill_test(void);
int	sigfpe_test(void);
int	sigabort_test(void);
int	sigpipe_test(void);

#endif