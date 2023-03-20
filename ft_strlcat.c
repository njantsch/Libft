/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:57:11 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/20 12:27:56 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_strlcat(char *dest, const char *src, unsigned int size)
{
    unsigned int i;
    unsigned int size_src;
    unsigned int size_dest;

    i = 0;
    size_src = 0;
    size_dest = 0;
    while (dest[size_dest])
        size_dest++;
    while (src[size_src])                   // error:  "zsh: abort"
        size_src++;
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

#include <stdio.h>
int main(void)
{
    char dest[] = "Ich bin 21 Jahre alt ";
    char src[] = "und heiße Nico";
    printf("%d\n", ft_strlcat(dest, src, 52));
    printf("%s\n", dest);
    return (0);
}
