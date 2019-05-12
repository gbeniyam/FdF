/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 19:42:42 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/04 21:44:07 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_p;
	unsigned char	*src_p;
	size_t			i;
	size_t			j;

	i = 0;
	j = len;
	dst_p = dst;
	src_p = src;
	while (i + 1 <= len)
	{
		if (dst_p + len < src_p)
		{
			while (--j > 0)
			{
				dst_p[j] = src_p[j];
			}
		}
		else
		{
			dst_p[i] = src_p[i];
		}
	}
	return (dst);
}
