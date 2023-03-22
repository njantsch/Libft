/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:00:10 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/21 18:20:29 by njantsch         ###   ########.fr       */
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
	while (s[size_str--] != 0)
	{
		if (s[size_str] == c)
			return ((char *)s + size_str);
	}
	return (0);
}
