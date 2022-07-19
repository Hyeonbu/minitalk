/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanjeon <chanjeon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:03:58 by chanjeon          #+#    #+#             */
/*   Updated: 2022/01/16 00:09:19 by chanjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*pt;
	size_t	i;

	pt = b;
	i = 0;
	while (i < len)
	{
		pt[i] = c;
		i++;
	}
	return (pt);
}
