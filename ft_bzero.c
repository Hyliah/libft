/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:33:46 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/13 20:22:27 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char   *c;
    
    c = (unsigned char*)s;
    while (n-- > 0)
        *(c++) = 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100] = "Hello";
    char str2[100] = "Hello";

    ft_bzero(str+2, 45);
    bzero(str2+2, 45);
    printf("%s\n", str);
     printf("%s\n", str2);
    return 0;
 }

/* The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.*/