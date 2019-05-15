/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 14:02:01 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/14 15:05:51 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*uc_s;
	unsigned char	uc_c;
	size_t			i;

	i = 0;
	uc_s = (unsigned char *)s;
	uc_c = (unsigned char)c;
	while (i++ <= n)
	{
		if (uc_s[i] == (unsigned char)uc_c)
			return (uc_s);
		else
			return (NULL);
	}
	return (NULL);
}
