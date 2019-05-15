/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 12:00:55 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/14 15:03:31 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst_b;
	unsigned char	*src_b;

	i = 0;
	while (i < n)
	{
		dst_b = (unsigned char *)dst;
		src_b = (unsigned char *)src;
		if (src_b[i] == c)
		{
			return (dst_b + 1);
		}
		else
		{
			dst_b[i] = src_b[i];
			i++;
		}
	}
	return (NULL);
}
