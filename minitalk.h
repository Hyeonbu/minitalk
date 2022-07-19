/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanjeon <chanjeon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:08:41 by chanjeon          #+#    #+#             */
/*   Updated: 2022/07/19 09:19:41 by chanjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "libft/libft.h"
# include <unistd.h>
# include <signal.h>

/* client.c */
void	ft_receive(int signo);
void	ft_send_server(int pid, char *str);

/* server.c */
int		ft_check_signal(int signo);
void	ft_receive_send(int signo, siginfo_t *info, void *context);

/* utils.c */
void	ft_putstr_nl(char *str);
void	print_error(char *str);

#endif
