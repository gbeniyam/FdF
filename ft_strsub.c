/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 13:49:44 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/30 20:18:46 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	end;
	char			*s_ptr;
	size_t			i;

	i = -1;
	end = start;
	s_ptr = (char *)s;
	if (!(s_ptr = ft_strnew(len)))
		return (NULL);
	while (++i < len)
		s_ptr[i] = s[start + i];
	return (s_ptr);
}
