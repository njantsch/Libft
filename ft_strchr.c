/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:51:31 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/20 12:27:40 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return ((char *)str + i);
        i++;
    }
    return (0);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "Hello, world!";
    char *ptr = strchr(str, 'o');
    printf("%s Output of the implemented function \n", ft_strchr(str, 'o'));
    printf("%s Output of the original function \n", ptr);
}
