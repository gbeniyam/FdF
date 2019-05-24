/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 15:26:30 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/18 21:30:10 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t j;
	char *result;
	char *c_s1;
	char *c_s2;

	i = 0;
	j = 0;
	c_s1 = (char *)s1;
	c_s2 = (char *)s2;
	if (!(result = ft_strnew(strlen(s1) + strlen(s2))))
		return (NULL);
	ft_strlcat(result, c_s1, ft_strlen(s1));
	ft_strlcat(result, c_s2, ft_strlen(s2));
	return (result);
}
