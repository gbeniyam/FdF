/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 20:06:37 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/08 20:25:26 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0' || i + 1 != len)
	{
		if (needle[j] == haystack[i])
		{
			j++;
			i++;
			if (needle[j] == '\0')
				break ;
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (needle);
}
