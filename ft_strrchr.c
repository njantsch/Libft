/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:00:10 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/20 12:28:26 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	size_str;

	size_str = 0;
	while (s[size_str])
	{
		size_str++;
	}
	while (s[size_str--] != s[0])
	{
		if (s[size_str] == c)
			return ((char *)s + size_str);
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	const char str[] = "Thet answer to eveaything";
	const char ch = 't';
	printf("Original output: %s\n", strrchr(str, ch));
	printf("Implemented output: %s\n", ft_strrchr(str, ch));
}
