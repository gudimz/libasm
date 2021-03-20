/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agigi <agigi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 22:59:12 by agigi             #+#    #+#             */
/*   Updated: 2021/03/20 16:20:13 by agigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libasm.h"

static void	ft_compare(char *str)
{
	size_t lib;
	size_t orig;

	lib = ft_strlen(str);
	orig = strlen(str);
	printf(" ft_strlen >> %ld <<\n strlen    >> %ld <<\n", lib, orig);
	if (lib == orig)
		printf("\033[32m [OK] \t\033[0m\n");
	else
		printf("\033[31m [FAIL] \t\033[0m\n");
}

void		ft_test_strlen(void)
{
	printf("\n\
*******************************************************\n\
*                                                     *\n\
*                   >> ft_strlen <<                   *\n\
*                                                     *\n\
*******************************************************\n");
	ft_compare("Hello world!");
	ft_compare("");
	ft_compare("      ");
	ft_compare("Hello wo\0rld!");
}
