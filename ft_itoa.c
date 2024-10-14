/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:31:05 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/13 18:32:48 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr(unsigned int n, char *array)
{
    if (n > 9)
        ft_putnbr(n / 10, array - 1);
    *array = (n % 10) + '0'; // -1 pour qu il commence à index -1. 
}

int ft_nblen(int nbr)
{
    unsigned int    n;
    int             len;

    len = 0;
    if (nbr < 0)
    {
        n = nbr * -1;
        len ++;
    }
    else 
        n = nbr;

    while (n > 9)
    {
        n /= 10;
        len ++;
    }
    len++;
    return (len);
}

char    *ft_itoa(int nbr)
{
    char    *str;
    int     len;

    len = ft_nblen(nbr);

    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    if (nbr < 0)
        str[0] = '-';
    str[len] = 0;
    ft_putnbr((unsigned int)nbr, str + len - 1);
    return (str);
}

#include <stdlib.h>
#include <stdio.h>
int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    char *tmp;

    tmp = ft_itoa(-65);
    printf("%s\n", tmp);
    free(tmp);
    tmp = ft_itoa(65);
    printf("%s\n", tmp);
    free(tmp);
    tmp = ft_itoa(120);
    printf("%s\n", tmp);
    free(tmp);
    tmp = ft_itoa(-180);
    printf("%s\n", tmp);
    free(tmp);
    tmp = ft_itoa(0x7FFFFFFF);
    printf("%s\n", tmp);
    free(tmp);
    tmp = ft_itoa(-0x80000000);
    printf("%s\n", tmp);
    free(tmp);
}