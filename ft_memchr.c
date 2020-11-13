/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:26:56 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2019/11/19 14:28:31 by pdiaz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*s1;
	int				i;

	ch = (unsigned char)c;
	s1 = (unsigned char *)str;
	i = 0;
	while (n--)
	{
		if (s1[i] == ch)
			return (s1 + i);
		i++;
	}
	return (NULL);
}
