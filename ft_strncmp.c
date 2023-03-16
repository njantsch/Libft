/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njantsch <njantsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:16:05 by njantsch          #+#    #+#             */
/*   Updated: 2023/03/15 11:16:30 by njantsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *str1, const char *str2, unsigned int n)
{
    int i;

    i = 0;
    while (i < n && str1[i] && str2[i])
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    if (i == n)
    {
        return (0);
    }
    if (str1[i] || str2[i])
    {
        return (str1[i] - str2[i]);
    }
    return (0);
}
