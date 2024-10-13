/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:00:35 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/13 14:41:59 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int len;

    len = ft_strlen((char *)s);
    while (len >= 0)
    {
        if (s[len] == ((char)c))
            return ((char *)(s + len));
        --len;
    }
    return (NULL);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(int ac, char **av)
// {
//     (void)ac;
//     printf("%s \n",strrchr(av[1], av[2][0]));
//     printf("%s \n",ft_strrchr(av[1], av[2][0]));
// }