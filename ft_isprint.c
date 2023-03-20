/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:40:50 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/20 12:27:11 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
	if (c <= 126 && c >= 32)
		return (1);
	else
		return (0);
}

#include <ctype.h>
#include <stdio.h>
int main(void)
{
	int res = isprint(0x7F);
	printf("Output of the implemented function: %d\n", ft_isprint(0x7F));
	printf("Output of the original function: %d\n", res);
}
