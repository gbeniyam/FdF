/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:02:36 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/26 22:20:24 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_passc(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char **str;
	char **words;
	size_t wordcount;

	wordcount = 0;
	words = (char **)s;
	str = words;
	wordcount = ft_wordcount(s, c);
	if(!(words = (char **)malloc(wordcount * sizeof(char **))))
		return (NULL);
	str = words;
	str[wordcount + 1] = NULL;
	while (wordcount > 0)
	{
		s = s + ft_passc(s, c);
		*words = ft_strsub(s, 0, ft_strwlen(s, c));
		s = ft_strchr(s, c);
		words++;
		wordcount--;
	}
	return (str);
}
