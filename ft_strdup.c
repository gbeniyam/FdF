/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 21:17:20 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/14 15:07:20 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*dup;
	size_t		i;

	i = 0;
	dup = (char *)s1;
	while (s1[i] != '\0')
	{
		i++;
	}
	dup = (char *)malloc(i * sizeof(char));
	free(dup);
	return (dup);
}
