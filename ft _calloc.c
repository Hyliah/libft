/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft _calloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:03:28 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/13 20:33:44 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_calloc(size_t count, size_t size)
{
    unsigned int    i;
    char			*str;

    i = count * size;
    str = (char *)malloc(sizeof(char) * (i + 1));
    if (!str)
        return (NULL);
        
    ft_bzero(str);
    return (str);
}
    // The calloc() function contiguously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated
    // memory.  The allocated memory is filled with bytes of value zero.
    // If successful, calloc(), malloc(), realloc(), reallocf(), valloc(), and aligned_alloc() functions return a pointer to allocated memory.  If there is an
    // error, they return a NULL pointer and set errno to ENOMEM.