/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:03:10 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/13 20:47:46 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char    *str;
    int     len;

    len = ft_strlen(s1);
    str = (char *)malloc(sizeof(char) * (len + 1));
    
    if (!str)
        return (NULL);
    
    return (str);
}
