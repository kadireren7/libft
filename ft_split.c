/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaaltint@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 02:47:39 by kaaltint          #+#    #+#             */
/*   Updated: 2026/08/10 02:47:49 by kaaltint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_create_word(char const *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = malloc((end - start) + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_delete_words(char **split, size_t count)
{
	if (!split)
		return ;
	while (count > 0)
	{
		count--;
		free(split[count]);
	}
	free(split);
}

static int	ft_put_words(char **split, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		split[word] = ft_create_word(s, start, i);
		if (!split[word])
			return (ft_delete_words(split, word), 0);
		word++;
	}
	split[word] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	count;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	split = malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	if (!ft_put_words(split, s, c))
		return (NULL);
	return (split);
}
