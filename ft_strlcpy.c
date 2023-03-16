/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:57:18 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/16 16:57:20 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    unsigned int src_len;

    i = 0;
    src_len = 0;
    while (src[src_len])
    {
        ++src_len;
    }
    if (dest == 0)
    {
        return (src_len);
    }
    while (i < size - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (src_len);
}
