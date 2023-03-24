/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:57:11 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/24 18:56:40 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_src;
	unsigned int	size_dest;

	i = 0;
	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	if (size == 0 || size <= size_dest)
		return (size_src + size);
	while (src[i] && i < size - size_dest - 1)
	{
		dest[size_dest] = src[i];
		i++;
		size_dest++;
	}
	dest[size_dest] = '\0';
	return (size_dest + size_src);
}
