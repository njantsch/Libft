/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:05:22 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/22 17:41:55 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_begin(char const *str1, char sep1, int len1)
{
	int	i;

	i = 0;
	while (i < leng)
	{
		if (str[i] != sep)
			break ;
		i++;
	}
	return (i);
}

static int	check_end(char const *str2, char sep2, int len2)
{
	int	i;
	int	old_i;

	i = check_begin(str2, sep2, len2);
	while (i < leng)
	{
		if (str[i] == sep)
			break ;
		i++;
	}
	old_i = i;
	return (i);
}

static int	malloc_len(char const *str, char sep, int leng)
{
	int	i;
	int	old_i;
	int	*count;

	i = 0;
	while (i < leng)
	{
		while (i < leng)
		{
			if (str[i] != sep)
				break ;
			i++;
		}
		old_i = i;
		while (i < leng)
		{
			if (str[i] == sep)
				break ;
			i++;
		}
		if ()

	}

}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	int		to_alloc;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	to_alloc = malloc(sizeof(char) * strlen(buffer) + 1);
	buffer =

}
