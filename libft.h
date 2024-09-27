/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 22:44:28 by hlichten          #+#    #+#             */
/*   Updated: 2024/09/28 01:04:49 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
//# define size_t unsigned int //temporaire

#include <stdlib.h>
#include <unistd.h>

int     ft_atoi(const char *str);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *s1);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
int	    ft_strlen(char *str);
char    *ft_strncpy(char *dst, const char *src, size_t len);

#endif