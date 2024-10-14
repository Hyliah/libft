/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:37:45 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/13 20:02:42 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    char  *str;
    size_t      i;
    
    str = (char *)s;
    i = 0;
    while (str[i] && str[i] != (char)c && i < n)
        ++i;
    if (str[i] == (char)c)
        return ((void *)&str[i]);
    return(NULL);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(int ac, char **av)
// {
//      (void)ac;
//      printf("%s\n", memchr(av[1], av[2][0], atoi(av[3])));
//      printf("%s\n", ft_memchr(av[1], av[2][0], atoi(av[3])));
// }
