/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:08:26 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/14 18:46:21 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;
	unsigned char *destination;
	unsigned char *source;

	i = 0;
	destination = (unsigned char *) dst;
	source = (unsigned char *) src;
	while (i < n - 1 && source[i])
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return (destination);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	const char src[50] = "Hallo ich heisse marvin";
	char dest[50];
	printf("Original output: %s\n", memcpy(dest, src, strlen(src) + 1));
	printf("Implemented output: %s\n", ft_memcpy(dest, src, strlen(src) + 1));
}
