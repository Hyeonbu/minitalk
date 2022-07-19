/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanjeon <chanjeon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 23:35:49 by chanjeon          #+#    #+#             */
/*   Updated: 2022/01/15 23:42:57 by chanjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*str;
	const char	*string;
	size_t		i;

	string = src;
	if (!dst && !src)
		return (NULL);
	str = dst;
	i = 0;
	while (i < n)
	{
		str[i] = string[i];
		i++;
	}
	return (dst);
}
