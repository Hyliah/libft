/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:11:03 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/16 21:48:58 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int     i;
    unsigned int     j;
    char            *str;

    i = 0;
    j = 0;

    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    while (i < start)
        i++;
    while (j < len && s[i])
    {
        str[j] = s[i];
        i++;
        j++;
    }
    str[j] = '\0';
    return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int ac, char **av)
// {
//     (void)ac;
//     char *str = ft_substr(av[1], atoi(av[2]), atoi(av[3]));
//     printf("%s\n", str);
//     free(str);
//     return (0);
// }