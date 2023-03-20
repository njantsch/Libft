/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:30:19 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/20 12:26:34 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	int	i;
	unsigned char *ptr;

	i = 0;
	ptr = (unsigned char *) s;
	while (i < n && ptr[i] != '\0')
	{
		ptr[i] = '\0';
		i++;
	}
}
