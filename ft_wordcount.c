/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 11:59:33 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2019/12/02 11:59:58 by pdiaz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char const *s, char c)
{
	int		cont;
	int		wcount;

	cont = 0;
	wcount = 0;
	while (s[cont] != '\0')
	{
		if (s[cont] == c)
			cont++;
		else
		{
			while (s[cont] != c && s[cont] != '\0')
				cont++;
			wcount++;
		}
	}
	return (wcount);
}
