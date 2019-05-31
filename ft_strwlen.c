/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 17:23:37 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/26 21:45:05 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strwlen(const char *s, char c)
{
    size_t i;

    i = 0;
	if (!s[i])
		return (0);
    while (s[i] != '\0' || s[i] != c)
        i++;
    return (i);
}
