/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:02:55 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/20 12:28:30 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char 	*temp;
	char	*dest = malloc(len);

	i = 0;
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

#include <stdio.h>
int	main(void)
{
	char const *str = "Maeuse regieren die Welt";
	printf("Original output: %s\n", substr(str, 8, ))
}
