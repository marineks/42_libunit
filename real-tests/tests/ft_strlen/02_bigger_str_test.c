/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_bigger_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanjuan <msanjuan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:16:20 by msanjuan          #+#    #+#             */
/*   Updated: 2022/01/09 20:07:57 by msanjuan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"

int	bigger_str_test(void)
{
	char	*str;

	str = "Le Livre de la Genèse (hébreu : ספר בראשית Sefer Bereshit \
	« Livre Au commencement », grec Βιϐλίον τῆς Γενέσεως / Biblíon tês Généseôs\
	 « Livre de la Naissance », syriaque ܣܦܪܐ ܕܒܪܝܬܐ Sifra deBrita « Livre de \
	  l’Alliance », latin : Liber Genesis) est le premier livre de la Bible. \
	  Ce texte est fondamental pour le judaïsme et le christianisme.";
	if (ft_strlen(str) == 402)
		return (0);
	else
		return (-1);
}
