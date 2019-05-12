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

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char i;

	i = 0;
	while (i < len)
	{
		*(unsigned char)b + i = (unsigned char)c;
		i++;
	}
	return (b);
}
