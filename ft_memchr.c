/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 14:02:01 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/29 10:43:00 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*uc_s;
	size_t			i;

	i = 0;
	uc_s = (unsigned char *)s;
	while (++i < n)
	{
		if (uc_s[i] == (unsigned char)c)
			return ((void*)(s + i));
	}
	return (NULL);
}
