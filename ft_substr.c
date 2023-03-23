/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:02:55 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/23 18:27:40 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		dest[i] = '\0';
		return (dest);
	}
	while (len > 0 && s[start])
	{
		dest[i] = s[start];
		i++;
		start++;
		len--;
	}
	dest[i] = '\0';
	return (dest);
}
