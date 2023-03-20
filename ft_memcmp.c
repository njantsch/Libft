/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:14:01 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/20 12:27:18 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	const unsigned char *st1;
	const unsigned char *st2;

	i = 0;
	st1 = (const unsigned char *) s1;
	st2 = (const unsigned char *) s2;
	while (i < n && st1[i] && st2[i])
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
			i++;
	}
	if (i == n)
	{
		return (0);
	}
	if (st1[i] || st2[i])
	{
		return (st1[i] - st2[i]);
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[15] = "@$d*";
	char str2[15] = "@$*";
	printf("Original output: %d\n", memcmp(str1, str2, 1));
	printf("Implemented output: %d\n", ft_memcmp(str1, str2, 1));
}
