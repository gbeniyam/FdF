/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 12:21:48 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/18 15:40:56 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
    size_t i;

    i = 0;
    if (!s1 || !s2)
        return (0);
    while ((s1[i] && s2[i]) && i < n)
    {
        if (s1[i] == s2[i])
        {
            i++;
        }
        else
            return (0);
    }
    return (1);
}
