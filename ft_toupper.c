/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:05:22 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/20 12:28:44 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}

#include <stdio.h>
#include <ctype.h>
int main(void)
{
	printf("Original output: %c\n", toupper(('z')));
	printf("Implemented output: %c\n", ft_toupper('z'));
}
