/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:30:21 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/21 17:58:37 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

static int	checkf(char const *str1, char const *chs)
{
	int	front_len;

	front_len = 0;
	while (str1[front_len])
	{
		if (ft_strchr(chs, str1[front_len]) == NULL)
			break ;
		front_len++;
	}
	return (front_len);
}

static int	checkb(char const *string, char const *characters)
{
	int	back_len;

	back_len = ft_strlen(string);
	while (string[back_len - 1] != 0)
	{
		if (ft_strchr(characters, string[back_len]) == NULL)
			break ;
		back_len--;
	}
	return (back_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy;
	int		final_len;
	int		f_len;
	int		b_len;
	int		i;

	i = 0;
	b_len = checkb(s1, set);
	f_len = checkf(s1, set);
	final_len = ft_strlen(s1) - f_len - b_len;
	cpy = (char *)malloc(final_len + 1);
	if (cpy == NULL)
		return (NULL);
	while (f_len <= b_len)
	{
		cpy[i] = s1[f_len];
		f_len++;
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
