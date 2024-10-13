/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:39:30 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/09 17:53:08 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char  *str1;
    const char  *str2;
    int         i;

    i = 0;
    str1 = (const char *)s1;
    str2 = (const char *)s2;

    while (i < n)
    {
        if (str1[i] == str2[i])
            i++;
        else 
            return (str1[i] - str2[i]);
    }    
    return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(int ac, char **av)
// {
//     (void)ac;
//     printf("%d \n", memcmp(av[1], av[2], atoi(av[3])));
//     printf("%d \n", ft_memcmp(av[1], av[2], atoi(av[3])));
//     return (0);
// }