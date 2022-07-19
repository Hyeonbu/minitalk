/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanjeon <chanjeon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:47:38 by chanjeon          #+#    #+#             */
/*   Updated: 2022/07/19 08:50:26 by chanjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_receive(int signo)
{
	static int	count = 0;

	if (signo == SIGUSR1)
		++count;
	else if (signo == SIGUSR2)
	{
		ft_putstr_fd("< RECEIVED MESSAGE : ", 1);
		ft_putnbr_fd(count, 1);
		ft_putstr_nl(" bytes >");
		exit(0);
	}
	else
		print_error("WRONG SIGNAL");
}

void	ft_send_server(int pid, char *str)
{
	int		i;
	char	ch;

	while (*str)
	{
		i = 8;
		ch = *str++;
		while (i--)
		{
			if (ch >> i & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(80);
		}
	}
	i = 8;
	while (i--)
	{
		kill(pid, SIGUSR1);
		usleep(80);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3 || !ft_strlen(argv[2]))
		print_error("./client [SERVER_PID] [MESSAGE]");
	ft_putstr_fd("        CLIENT PID : [", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_nl("]");
	ft_putstr_fd("    < SENT MESSAGE : ", 1);
	ft_putnbr_fd(ft_strlen(argv[2]), 1);
	ft_putstr_nl(" bytes >");
	signal(SIGUSR1, ft_receive);
	signal(SIGUSR2, ft_receive);
	ft_send_server(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
	return (0);
}
