/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:35:46 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/16 15:11:33 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL || count == 0 || size == 0)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}

#include <stdio.h>
int main(void)
{
	int *b = (int*)ft_calloc(5, sizeof(int) * 4);
	int *a = (int*)calloc(5, sizeof(int) * 4);
	printf("Original output: %d\n", *a);
	printf("Implemented output: %d\n", *b);

	free(a);
	free(b);
}
