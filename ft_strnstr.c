/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:00:26 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/09 18:18:39 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *strnstr(const char *haystack, const char *needle, size_t len)
{

}
// The strnstr() function locates the first occurrence of the null-terminated string needle in the string 
// haystack, where not more than len characters are searched.  
// Characters that appear after a ‘\0’ character are not searched.  
// Since the strnstr() function is a FreeBSD specific API, it should only be used
// when portability is not a concern.