/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:29:14 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/08 18:44:50 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	srcsize;

	if (!dst || !src)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	while(src[i] && i < (dstsize -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(srcsize);
}

// a tester

