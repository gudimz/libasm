/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agigi <agigi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:54:22 by agigi             #+#    #+#             */
/*   Updated: 2021/03/21 13:00:23 by agigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libasm.h"

static void	ft_compare(char *str)
{
	char lib[30];
	char orig[30];

	ft_strcpy(lib, str);
	strcpy(orig, str);
	printf(" input:    >> |%s| <<\n", str);
	printf(" ft_strcpy >> |%s| <<\n strcpy    >> |%s| <<\n", lib, orig);
	if (!(strcmp(lib, orig)))
		printf("\033[32m [OK] \t\033[0m\n");
	else
		printf("\033[31m [FAIL] \t\033[0m\n");
}

void		ft_test_strcpy(void)
{
	printf("\n\
*******************************************************\n\
*                                                     *\n\
*                   >> ft_strcpy <<                   *\n\
*                                                     *\n\
*******************************************************\n");
	ft_compare("Hello world!");
	ft_compare("");
	ft_compare("      ");
	ft_compare("Hello wo\0rld!");
}
