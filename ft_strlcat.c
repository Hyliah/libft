/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:49:52 by hlichten          #+#    #+#             */
/*   Updated: 2024/09/27 22:56:49 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    k;

    k = 0;
    while (dest(k) && k < dstsize)
        k++;
    if (dstsize <= k)
        return (dstsize + ft_strlen(src));
    i = 0;
    j = k;
    while (src[i] && j < dstsize -1)
    {
        dst[j] = src[i];
        i++;
        j++;   
    }
    dst[j] = '\0';
    return (k + ft_strlen(src));
}