/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agigi <agigi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:54:59 by agigi             #+#    #+#             */
/*   Updated: 2021/03/21 13:28:47 by agigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libasm.h"

static void	ft_compare_errno(int fildes, char *buf)
{
	int lib_errno;
	int orig_errno;

	errno = 0;
	ft_write(fildes, buf, strlen(buf));
	lib_errno = errno;
	printf(" lib errno =   |%d| : %s\n", lib_errno, strerror(lib_errno));
	errno = 0;
	write(fildes, buf, strlen(buf));
	orig_errno = errno;
	printf(" orig errno =  |%d| : %s\n", orig_errno, strerror(orig_errno));
	if (lib_errno == orig_errno)
		printf("\033[32m [OK] \t\033[0m\n");
	else
		printf("\033[31m [FAIL] \t\033[0m\n");
}

static void	ft_compare(int fildes, char *buf)
{
	int lib;
	int orig;

	if (fildes == 60)
		ft_compare_errno(fildes, buf);
	else
	{
		write(1, " ft_write = ", 12);
		lib = ft_write(fildes, buf, strlen(buf));
		write(1, " write =    ", 12);
		orig = write(fildes, buf, strlen(buf));
		printf(" ft_ret >> |%d| <<\n ret    >> |%d| <<\n", lib, orig);
		if (lib == orig)
			printf("\033[32m [OK] \t\033[0m\n");
		else
			printf("\033[31m [FAIL] \t\033[0m\n");
	}
}

void		ft_test_write(void)
{
	printf("\n\
*******************************************************\n\
*                                                     *\n\
*                   >> ft_write <<                    *\n\
*                                                     *\n\
*******************************************************\n");
	ft_compare(1, "|Hello|\n");
	ft_compare(1, "||\n");
	ft_compare(1, "|    !|\n");
	ft_compare(0, "|Hello world!|\n");
	ft_compare(60, "|world!|\n");
}
