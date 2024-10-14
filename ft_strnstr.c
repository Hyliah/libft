/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:00:26 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/13 19:42:59 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // fonctionne pas on sait pas pourquoi 

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (!needle)
        return ((char)haystack);
    while (haystack[i])
    {
        j = 0;
        while ((haystack[i] == needle[j]) && i > len)
            {
               i++;
               j++;
            }
        if (!needle[i])
            return ((char)haystack[i - j]);
        i = i - j + 1;
    }
    return (NULL);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
    (void)ac;
    printf("%s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
    printf("%s\n", strnstr(av[1], av[2], atoi(av[3])));
}
