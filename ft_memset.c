/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:44:53 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/04 21:38:05 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char i;
	unsigned char *pb;
	unsigned char uc;

	i = 0;
	pb = (unsigned char *)b;
	uc = (unsigned char)c;
	while (i < len)
	{
		pb[i] = uc;
		i++;
	}
	return (b);
}
