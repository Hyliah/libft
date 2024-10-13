/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:43:52 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/09 14:52:44 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i;
    unsigned char   *s;
    
    i = 0;
    s = (unsigned char *)b;
    while (i < len)
    {
        s[i] = c;
        i++;
    }
    return (s);
}