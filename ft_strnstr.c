/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:57:30 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/21 18:20:17 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n && haystack[i] != '\0')
	{
		j = 0;
		while (i + j < n && haystack[i + j] == needle[j]
			&& needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
