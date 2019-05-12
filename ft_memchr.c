/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 14:02:01 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/04 21:42:08 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*uc_s;
	unsigned char	uc_c;
	size_t			i;

	i = 0;
	while (i++ <= n)
	{
		if (ch_s[i] == (unsigned char)uc_c)
			return (uc_s);
		else
			return (NULL);
	}
}
