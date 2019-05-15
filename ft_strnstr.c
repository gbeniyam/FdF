/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 20:06:37 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/14 14:20:41 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	char *c_haystack;
	char *c_needle;

	i = 0;
	j = 0;
	c_haystack = (char *)haystack;
	c_needle = (char *)needle;
	while (c_haystack[i] != '\0' || i + 1 != len)
	{
		if (c_needle[j] == c_haystack[i])
		{
			j++;
			i++;
			if (c_needle[j] == '\0')
				break ;
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (c_needle);
}
