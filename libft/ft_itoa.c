/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanjeon <chanjeon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 22:51:23 by chanjeon          #+#    #+#             */
/*   Updated: 2022/01/30 04:47:35 by chanjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	getsize(int nb)
{
	size_t	size;

	size = 0;
	if (nb <= 0)
		size++;
	while (nb != 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	long	nb;

	size = getsize(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size--] = '\0';
	nb = n;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	else if (nb == 0)
		str[0] = '0';
	while (nb != 0)
	{
		str[size] = (nb % 10) + '0';
		nb /= 10;
		size--;
	}
	return (str);
}
