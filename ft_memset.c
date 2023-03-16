/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:58:07 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/14 16:27:36 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int i;
	unsigned char *ptr;

	i = 0;
	ptr = (unsigned char *) b;
	while (i < len && ptr[i] != '\0')
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[50] = "This function is bullshit";
	char *res = memset(str, '.', sizeof(char) * 8);
	printf("Original output: %s\n", res);
	printf("Implemented output: %s\n", ft_memset(str, '.', sizeof(char) * 8));
}
