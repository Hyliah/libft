/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:02:40 by hlichten          #+#    #+#             */
/*   Updated: 2024/09/28 00:32:30 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;

	cpy = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (cpy == NULL)
		return (NULL);
	else
		cpy = ft_strcpy(cpy, s1);
	return (cpy);
}

