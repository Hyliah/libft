/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:42:21 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/19 19:01:56 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dst;
	s = (const char *)src;
	i = 0;
	if (src > dst)
		return (ft_memcpy(dst, src, len));
	if (src < dst)
	{
		while (0 < len)
		{
			d[i] = s[i];
			len--;
		}
	}
	return (dst);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(int ac, char **av)
// {
//     (void)ac;
//     printf("%s\n", (char *)memmove(av[1], av[2], atoi(av[3])));
//     printf("%s\n", (char *)ft_memmove(av[4], av[5], atoi(av[6])));
//     return (0);
// }
