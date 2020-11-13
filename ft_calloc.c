/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 10:52:51 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2019/12/02 11:23:05 by pdiaz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	total;
	void	*p;

	total = n * size;
	p = malloc(total);
	if (!p)
		return (NULL);
	return (ft_memset(p, 0, total));
}
