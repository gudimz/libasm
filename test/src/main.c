/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agigi <agigi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 22:20:53 by agigi             #+#    #+#             */
/*   Updated: 2021/03/20 16:27:37 by agigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libasm.h"

int	main(void)
{
	printf("\n\n\
{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\
{}                                                    {}\n\
{}                  >> TEST LIBASM <<                 {}\n\
{}                                                    {}\n\
{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
	ft_test_strcmp();
	ft_test_strlen();
	ft_test_strcpy();
	ft_test_strdup();
	//ft_test_write();
	printf("\n\
{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n\
{}                                                    {}\n\
{}                    >> FINISH <<                    {}\n\
{}                                                    {}\n\
{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}\n");
	return (0);
}
