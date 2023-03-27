/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:05:22 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/27 20:49:18 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int	word_count(char const *str, char sep,)
{
	int	i;
	int	count;
	int	len;

	i = 0;
	count = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		while (i < len)
		{
			if (str[i] == sep)
				break;
			i++;
		}
		count++;
	}
	return (count);
}

static char *get_word(char const *str , int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = ft_calloc(ft_strlen(str) + 1);
	while (start < finish)
		word[start++] = str[i++];
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	int		index;
	int		x;
	int		y;

	index = 0;
	x = 0;
	y = 0;
	buffer = ft_calloc(word_count(s, c) + 1, sizeof(char **));
	if (!buffer || !s)
		return (0);
	while (index <= ft_strlen(s))
	{
		if (s[x++] == c)
		{
			buffer[y++] = get_word(s, index, x);
			index = x;
		}
	}
}
