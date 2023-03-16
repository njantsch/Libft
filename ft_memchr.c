/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:18:47 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/15 11:12:03 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	unsigned char *str;

	i = 0;
	str = (unsigned char *) s;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	const char str[] = "Born to code";
	const char ch = 'e';
	printf("Original output: %s\n", memchr(str, ch, 6));
	printf("Implemented output: %s\n", ft_memchr(str, ch, 6));
}
