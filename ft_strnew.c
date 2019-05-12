/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 18:37:57 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/11 18:37:58 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char    *ft_strnew(size_t size)
{
    size_t *ptr;
    size_t i;

    i = size - 1;

    ptr = (size_t *)malloc(size * sizeof(size_t));
    while (i >= 0)
    {
        ptr[i] = '\0';
        i++;
    }
    return (ptr);
}