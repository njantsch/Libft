/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:42:26 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/20 12:27:33 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;
	char temp;
	unsigned char *dest;
	unsigned char *source;

	i = 0;
	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	while(i < len && source[i])
	{
		temp = source[i];					//zsh :abort
		dest[i] = temp;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	char dest[] = "oldstring";
	const char src[] = "newstringmeme";
	printf("Original output: %s\n", memmove(dest, src, 9));
	printf("Implemented output: %s\n", ft_memmove(dest, src, 9));
}
