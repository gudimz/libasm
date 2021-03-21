/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agigi <agigi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 00:19:38 by agigi             #+#    #+#             */
/*   Updated: 2021/03/21 13:14:51 by agigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libasm.h"

static void	ft_compare(char *s1, char *s2)
{
	int lib;
	int orig;

	lib = ft_strcmp(s1, s2);
	orig = strcmp(s1, s2);
	printf(" input:    >> |%s| << >> |%s| <<\n", s1, s2);
	printf(" ft_strcmp >> |%d| <<\n strcmp    >> |%d| <<\n", lib, orig);
	if (lib == orig)
		printf("\033[32m [OK] \t\033[0m\n");
	else
		printf("\033[31m [FAIL] \t\033[0m\n");
}

void		ft_test_strcmp(void)
{
	printf("\n\
*******************************************************\n\
*                                                     *\n\
*                   >> ft_strcmp <<                   *\n\
*                                                     *\n\
*******************************************************\n");
	ft_compare("Hello", "Hello");
	ft_compare("", "");
	ft_compare("", "Hello");
	ft_compare("Hello", "world!");
	ft_compare("Hell", "Hello");
	ft_compare("Hello", "Hell");
}
