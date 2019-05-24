/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:39:46 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/23 15:49:25 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * * Bonus function used for ft_strsplt.c
 * * Count words in a string, delimited by c char
 * * ft_strchr used to skip to next delimiter-
 * * after adding/updating word total.
 */

size_t	ft_wordcount(const char *str, char c)
{
	size_t words;

	words = 0;
	while (*str)
	{
		if (*(str) == c)
			str++;
		else
		{
			words++;
			if (!(str = ft_strchr(str, c)))
				return (words);
		}
	}
	return (words);
}
