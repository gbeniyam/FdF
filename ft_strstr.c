/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 19:38:09 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/14 14:17:48 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	char *c_haystack;
	char *c_needle;

	i = 0;
	j = 0;
	c_haystack = (char *)haystack;
	c_needle = (char *)needle;
	while (c_haystack[i] != '\0')
	{
		if (c_needle[j] == c_haystack[i])
		{
			j++;
			i++;
			if (c_needle[j] == '\0')
				break;
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (c_needle);
}
