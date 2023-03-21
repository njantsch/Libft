/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:02:55 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/21 14:20:28 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char 	*temp;
	char	*dest = malloc(len);

	i = 0;
	temp = NULL;
	if (dest == NULL)
		return (NULL);
	while (start < len && s[start] != '\0')
	{
		*temp = s[start];
		dest[i] = *temp;
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}
