/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:27:46 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/13 14:30:32 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (*s && *s != (char)c)
        ++s;
    if (!*s && c)
        return (NULL);
    return ((char *)s);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(int ac, char **av)
// {
//     (void)ac;
//     printf("%s \n",strchr(av[1], av[2][0]));
//     printf("%s \n",ft_strchr(av[1], av[2][0]));
// }
