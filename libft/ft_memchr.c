/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanjeon <chanjeon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 23:25:17 by chanjeon          #+#    #+#             */
/*   Updated: 2022/01/15 23:35:23 by chanjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	tmp;
	size_t	i;

	str = (char *)s;
	tmp = (char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == tmp)
			return (&str[i]);
		i++;
	}
	return (0);
}
