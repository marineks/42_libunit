/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:21:17 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 20:02:16 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL_TESTS_H
# define REAL_TESTS_H

# include <unistd.h>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define PURPLE "\033[1;35m"
# define CYAN "\033[1;36m"
# define WHITE "\033[1;37m"
# define RESET "\033[0;0m"

// FT_STRLEN
int	strlen_launcher(void);
int	basic_test(void);
int	bigger_str_test(void);
int	null_test(void);
// FT_ATOI
int	atoi_launcher(void);
int	atoi_basic_test(void);
int	atoi_neg_test(void);
int	atoi_blanks_test(void);
int	atoi_intmax_test(void);
int	atoi_intmin_test(void);
int	atoi_plussign_test(void);
// FT_SPLIT
int	split_launcher(void);
int	split_basic(void);
int	split_nosep(void);
int	split_emptystr(void);
int	split_onlysep(void);
// FT_STRLCAT
int	strncat_launcher(void);
int	strncat_basic_concat(void);
int	strncat_sizezero(void);
int	strncat_nodst(void);
int	strncat_nosrc(void);

#endif