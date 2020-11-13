/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiaz-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 14:34:30 by pdiaz-pa          #+#    #+#             */
/*   Updated: 2019/12/02 12:11:37 by pdiaz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_wordsplit(char const *str, char c)
{
	char		*word;
	int			cont;

	cont = 0;
	while (str[cont] && str[cont] != c)
		cont++;
	if (!(word = (char *)malloc(sizeof(char) * (cont + 1))))
		return (NULL);
	cont = 0;
	while (str[cont] && str[cont] != c)
	{
		word[cont] = str[cont];
		cont++;
	}
	word[cont] = '\0';
	return (word);
}

char			**ft_split(char const *s, char c)
{
	char		**words;
	int			cont;

	if (!s || !c)
	{
		words = malloc(sizeof(char *));
		words[0] = NULL;
		return (words);
	}
	if (!(words = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	cont = 0;
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		if (*s && *s != c)
		{
			words[cont++] = ft_wordsplit(s, c);
			while (*s && *s != c)
				s++;
		}
	}
	words[cont] = NULL;
	return (words);
}
