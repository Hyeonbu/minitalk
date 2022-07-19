/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanjeon <chanjeon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 23:45:23 by chanjeon          #+#    #+#             */
/*   Updated: 2022/01/30 19:29:12 by chanjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dstcpy;
	const char	*srccpy;
	size_t		i;

	i = -1;
	srccpy = src;
	dstcpy = dst;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		while (++i < len)
			dstcpy[i] = srccpy[i];
	else
		while (++i < len)
			dstcpy[len - 1 - i] = srccpy[len - 1 - i];
	return (dst);
}
