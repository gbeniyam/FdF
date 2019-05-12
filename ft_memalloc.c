/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 17:27:08 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/05/11 17:35:08 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memalloc(size_t size)
{
	void *areaptr;
	areaptr = (void)malloc(size * sizeof(size_t));
	return (areaptr);
}
