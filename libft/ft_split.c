/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboufou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 23:04:32 by saboufou          #+#    #+#             */
/*   Updated: 2019/11/12 16:16:36 by saboufou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int			count_words(char const *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 1;
	while (s[i])
	{
		if (s[i] == c)
			words++;
		i++;
	}
	return (words);
}

static	char		*malloc_word(char const *s, char c)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		j++;
	}
	if (!(word = (char *)malloc(sizeof(char) * j + 1)))
		return (NULL);
	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char				**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i] != '\0')
			tab[words++] = malloc_word(s + i, c);
		while (s[i] != c && s[i])
			i++;
	}
	tab[words] = NULL;
	return (tab);
}
