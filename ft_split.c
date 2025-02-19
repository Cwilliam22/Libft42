/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:52:15 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 13:55:33 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_array(char **dest, int i)
{
	while (i > 0)
	{
		i--;
		free(dest[i]);
	}
	free(dest);
	return (0);
}

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_putword(char *word, char const *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_split_words(char const *s, char c, char **dest, int num_words)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		dest[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!dest[word])
			return (free_array(dest, word));
		ft_putword(dest[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	dest[word] = 0;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char			**dest;
	unsigned int	num_words;

	if (!s)
		return (0);
	num_words = ft_count_words(s, c);
	dest = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!dest)
		return (0);
	dest = ft_split_words(s, c, dest, num_words);
	return (dest);
}

/*
#include <stdio.h>

int main()
{
	char **result = ft_split(" exrecice a la con qui a fait cette merde", ' ');

	if (result) {
		for (size_t i = 0; result[i]; i++) {
			printf("%s\n", result[i]);
			free(result[i]);
		}
		free(result);
	} else {
		printf("Erreur d'allocation mémoire\n");
	}

	return 0;
}
*/
