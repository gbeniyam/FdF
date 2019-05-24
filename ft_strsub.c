/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 13:49:44 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/17 15:26:00 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int end;
	char *s_ptr;
	size_t i;

	i = 0;
	end = (unsigned int)start;
	s_ptr = (char *)s;
	if (!(s_ptr = ft_strnew(len)))
		return (0);
	while (i < len)
	{
		s_ptr[i] = s[start + i];
		i++;
	}
	return (s_ptr);
}
