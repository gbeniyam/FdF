/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 20:25:49 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/18 17:18:15 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t i;
	char *c_s1;
	char *c_s2;

	i = 0;
	c_s1 = (char *)s1;
	c_s2 = (char *)s2;
	while (c_s1[i] != '\0' || c_s2[i] != '\0')
	{
		if (c_s1[i] == c_s2[i])
			i++;
		else if (c_s1[i] > c_s2[i])
			return (c_s1[i] - c_s2[i]);
		else if (c_s1[i] < c_s2[i])
			return (c_s2[i] - c_s1[i]);
	}
	return (0);
}
