/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 18:37:57 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/14 18:52:32 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ptr;
	size_t i;

	i = 0;
	ptr = (char *)malloc(size * sizeof(size_t));
	while (i <= size - 1)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
