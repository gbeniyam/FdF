/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 12:00:55 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/04 21:42:46 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*dst_b;
	unsigned char	*src_b;

	i = 0;
	while (i < n)
	{
		dst_b = dst;
		src_b = src;
		if (src_b[i] == c)
		{
			return (dst_b + 1);
		}
		else
		{
			dst_b[i] = src_b[i];
			i++;
		}
		return (NULL);
	}
}
