/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:03:48 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/16 21:43:34 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    write(fd, &s, ft_strlen(s));
}

void    ft_putstr(char *s, int fd)
{
    int i;

    i = -1
    while (str[++i])
        write(fd, &str[i], 1);
}
