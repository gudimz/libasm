/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agigi <agigi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 00:33:27 by agigi             #+#    #+#             */
/*   Updated: 2021/03/19 00:40:38 by agigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libasm.h"

static void ft_compare(char *str)
{
	char *lib;
	char *orig;

	lib = ft_strdup(str);
	orig = strdup(str);
	printf("ft_strdup >> %s <<\n strdup >> %s <<\n", lib, orig);
	if (!(strcmp(lib, orig)))
		printf("\033[32m [OK] \t\033[0m");
	else
		printf("\032[32m [FAIL] \t\033[0m");
	free(lib);
	free(orig);
}

void ft_test_strdup(void)
{
		printf("\
*******************************************************\n\
*                                                     *\n\
*                   >> ft_strdup <<                   *\n\
*                                                     *\n\
*******************************************************\n");
ft_compare("Hello world!");
ft_compare("");
ft_compare("      ");
ft_compare("Hello wo\0rld!");
}