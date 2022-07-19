/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanjeon <chanjeon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:41:45 by chanjeon          #+#    #+#             */
/*   Updated: 2022/01/30 01:11:21 by chanjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	tmp;

	str = (char *)s;
	tmp = (char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == tmp)
			return (&str[i]);
		i++;
	}
	if (str[i] == tmp)
		return (&str[i]);
	return (0);
}
