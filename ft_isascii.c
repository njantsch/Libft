/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:51:07 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/14 14:39:53 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int res = isascii(0x80);
	printf("Output of the implemented function: %d\n", ft_isascii(0x80));
	printf("Output of the original function: %d\n", res);
}
