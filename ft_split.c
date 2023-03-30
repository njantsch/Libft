/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:05:22 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/30 15:14:36 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int	word_count(char const *str, char sep)
{
	int	i;
	int	count;
	int	len;

	i = 0;
	count = 0;
	len = ft_strlen(str);
	while (str && str[i])
	{
		if (str[i] != sep)
		{
			count++;
			while (str[i] != sep && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*get_word(char const *str , int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = ft_calloc(1, finish - start + 1);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	size_t	index;
	size_t	x;
	size_t	y;

	index = 0;
	x = 0;
	y = 0;
	if (!((char **)buffer = malloc((word_count(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (x <= ft_strlen(s))
	{
		if (s[x] == c || x == ft_strlen(s))
		{
			buffer[y++] = get_word(s, index, x);
			index = x;
		}
		x++;
	}
	buffer[y] = 0;
	return (buffer);
}
