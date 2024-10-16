/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 22:44:28 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/16 20:58:10 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h> //pour malloc
#include <unistd.h> //pour write
//#include <stddef.h> // pour le size_t

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
int	    ft_strlen(char *str);

int     ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
char    *ft_strchr(const char *s, int c);
void    *ft_memset(void *b, int c, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_substr(char const *s, unsigned int start, size_t len);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);





#endif