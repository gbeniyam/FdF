/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 21:17:20 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/04 21:44:31 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	const char	*dup;
	size_t		i;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	dup = malloc(i * sizeof(char));
	free(dup);
	return (dup);
}
