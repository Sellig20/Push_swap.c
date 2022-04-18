/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:08:16 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/15 16:31:15 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_word_len(char *s, char c)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static int	ft_count_word(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (-1);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

char	**free_split(char **str, int count)
{
	while (0 <= count)
	{
		free(str[count]);
		count--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = -1;
	k = 0;
	tab = malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!tab || !s)
		return (NULL);
	while (++i < ft_count_word(s, c))
	{
		j = 0;
		tab[i] = malloc((ft_word_len(&s[k], c) + 1) * sizeof(char));
		if (tab[i] == NULL)
			free_split(tab, i);
		while (s[k] == c && s[k])
			k++;
		while (s[k] != c && s[k])
			tab[i][j++] = s[k++];
		tab[i][j] = '\0';
	}
	tab[i] = NULL;
	return (tab);
}
