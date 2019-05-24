/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 18:37:57 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/17 14:40:16 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ptr;
	size_t i;

	i = 0;
	if (!(ptr = (char *)malloc((size + 1) * sizeof(size_t))))
		return (0);
	while (i < size)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
