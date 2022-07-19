/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanjeon <chanjeon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 01:31:08 by chanjeon          #+#    #+#             */
/*   Updated: 2022/07/19 01:58:42 by chanjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putstr_nl(char *str)
{
	char	nl;

	nl = '\n';
	while (str && *str != '\0')
	{
		write(1, str++, 1);
	}
	write(1, &nl, 1);
}

void	print_error(char *str)
{
	ft_putstr_fd("ERROR : ", 1);
	ft_putstr_fd(str, 1);
	ft_putchar_fd('\n', 1);
	exit(1);
}
