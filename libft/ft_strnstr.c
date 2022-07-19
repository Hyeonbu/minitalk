/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanjeon <chanjeon@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 02:10:45 by chanjeon          #+#    #+#             */
/*   Updated: 2022/01/30 02:18:55 by chanjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)haystack;
	i = 0;
	if (*needle == '\0')
		return (&str[i]);
	while (str[i] && i < len)
	{
		j = 0;
		while (i + j < len && (str[i + j] == needle[j]))
		{
			if (needle[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
