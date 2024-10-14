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

#include "libft.h" //demander à Hermes ou Tristan le BG

void    *ft_memchr(const void *s, int c, size_t n)
{
    const char  *str;
    size_t      i;
    
    str = (char *)s;
    i = 0;
    while (str[i] && str[i] != (char)c && i < n)
        ++i;
    if (!*str && c)
        return (NULL);
    return((void *)str);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int ac, char **av)
{
     (void)ac;
     printf("%\n", memchr(av[1], av[2][0], atoi(av[3])));
     printf("%\n", ft_memchr(av[1], av[2][0], atoi(av[3])));
}

//  DESCRIPTION
//  The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.

// RETURN VALUES
// The memchr() function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.