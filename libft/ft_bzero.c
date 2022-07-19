/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanjeon <chanjeon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 22:16:32 by chanjeon          #+#    #+#             */
/*   Updated: 2022/01/15 22:21:16 by chanjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *pt, size_t nb)
{
	char	*str;
	size_t	i;

	str = pt;
	i = 0;
	while (i < nb)
	{
		str[i] = 0;
		i++;
	}
	return (pt);
}
