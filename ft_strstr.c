/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 19:38:09 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/07 19:58:12 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0')
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
