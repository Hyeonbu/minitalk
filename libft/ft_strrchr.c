/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanjeon <chanjeon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 02:22:33 by chanjeon          #+#    #+#             */
/*   Updated: 2022/01/30 02:26:22 by chanjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	ch;
	int		i;

	str = (char *)s;
	ch = (char)c;
	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == ch)
			return (&str[i]);
		i--;
	}
	return (0);
}
