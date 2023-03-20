/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:12:20 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/20 12:27:49 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t len;

	len = ft_strlen(s1) + 1;
	char	*dest = malloc(len);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s1, len);
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char *str = "";
	printf("Original output: %s\n", strdup(str));
	printf("Implemented output: %s\n", ft_strdup(str));
}
