/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:58:07 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/21 14:19:42 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
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

