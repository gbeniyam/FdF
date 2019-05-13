/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 20:25:49 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/10 14:53:52 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t i;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s2[i] - s1[i]);
	}
	return (0);
}
