/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:33:46 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/13 15:11:03 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char   *c;
    
    *c = (unsigned char*)s;
    while (n-- > 0)
        *(c++) = 0;
}

/* The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.*/