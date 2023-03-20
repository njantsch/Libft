/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:23:52 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/20 12:28:35 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}

#include <stdio.h>
#include <ctype.h>
int main(void)
{
	printf("Original output: %c\n", tolower(('%')));
	printf("Implemented output: %c\n", ft_tolower('%'));
}
