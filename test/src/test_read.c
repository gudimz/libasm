/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agigi <agigi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 22:39:25 by agigi             #+#    #+#             */
/*   Updated: 2021/03/21 13:34:27 by agigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libasm.h"

static void	ft_compare_errno(int fd_lib, int fd_orig)
{
	int		lib_errno;
	int		orig_errno;
	char	lib_buf[30];
	char	orig_buf[30];

	errno = 0;
	ft_read(fd_lib, lib_buf, -1);
	lib_errno = errno;
	printf(" lib errno =   |%d| : %s\n", lib_errno, strerror(lib_errno));
	errno = 0;
	read(fd_orig, orig_buf, -1);
	orig_errno = errno;
	printf(" orig errno =  |%d| : %s\n", orig_errno, strerror(orig_errno));
	if (lib_errno == orig_errno)
		printf("\033[32m [OK] \t\033[0m\n");
	else
		printf("\033[31m [FAIL] \t\033[0m\n");
}

static void	ft_compare(int fd_lib, int fd_orig)
{
	int		lib;
	int		orig;
	char	lib_buf[30];
	char	orig_buf[30];

	lib = ft_read(fd_lib, lib_buf, 15);
	orig = read(fd_orig, orig_buf, 15);
	printf(" ft_read >> |%s| <<\n read    >> |%s| <<\n", lib_buf, orig_buf);
	printf(" ft_ret >> |%d| <<\n ret    >> |%d| <<\n", lib, orig);
	if (lib == orig)
		printf("\033[32m [OK] \t\033[0m\n");
	else
		printf("\033[31m [FAIL] \t\033[0m\n");
	ft_compare_errno(fd_lib, fd_orig);
}

void		ft_test_read(void)
{
	int fd_lib;
	int fd_orig;

	printf("\n\
*******************************************************\n\
*                                                     *\n\
*                   >> ft_read <<                     *\n\
*                                                     *\n\
*******************************************************\n");
	fd_lib = open("Makefile", O_RDONLY);
	fd_orig = open("Makefile", O_RDONLY);
	ft_compare(fd_lib, fd_orig);
	close(fd_lib);
	close(fd_orig);
}
