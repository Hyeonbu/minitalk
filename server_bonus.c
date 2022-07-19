/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanjeon <chanjeon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:46:34 by chanjeon          #+#    #+#             */
/*   Updated: 2022/07/19 17:34:32 by chanjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

int	ft_check_signal(int signo)
{
	if (signo == SIGUSR2)
		return (1);
	else if (signo == SIGUSR1)
		return (0);
	else
		print_error("WRONG SIGNAL");
	return (0);
}

void	ft_receive_send(int signo, siginfo_t *info, void *context)
{
	static pid_t			client_pid = 0;
	static unsigned char	ch = 0;
	static int				i = 0;

	(void)context;
	if (!client_pid)
		client_pid = info->si_pid;
	ch += ft_check_signal(signo);
	if (++i >= 8)
	{
		i = 0;
		if (ch == '\0')
		{
			kill(client_pid, SIGUSR2);
			client_pid = 0;
			write(1, "\n", 1);
			return ;
		}
		ft_putchar_fd(ch, 1);
		ch = 0;
		kill(client_pid, SIGUSR1);
	}
	else
		ch <<= 1;
}

int	main(int argc, char **argv)
{
	struct sigaction	server_act;

	(void)argv;
	if (argc != 1)
		print_error("./server [NO_ARGUMENT]");
	ft_putstr_fd("SERVER PID : [", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_nl("]");
	server_act.sa_sigaction = ft_receive_send;
	server_act.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &server_act, NULL);
	sigaction(SIGUSR2, &server_act, NULL);
	while (1)
		pause();
	return (0);
}
