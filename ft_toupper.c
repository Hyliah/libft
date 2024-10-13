/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:15:19 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/08 18:42:56 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c -= 32);
    return (c);
}
/*
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    (void)ac;
    printf("%d \n", toupper(atoi(av[1])));
    printf("%d \n", ft_toupper(atoi(av[1])));
 
    return 0;
}*/
