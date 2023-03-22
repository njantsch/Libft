/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:42:26 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/21 18:03:52 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			temp;
	unsigned char	*dest;
	unsigned char	*source;

	i = 0;
	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	while (i < len && source[i])
	{
		temp = source[i];
		dest[i] = temp;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
