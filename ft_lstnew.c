/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:09:10 by hlichten          #+#    #+#             */
/*   Updated: 2024/10/20 16:09:10 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list 	*list;

	list = malloc(sizeof(*t_list));
	if (!list)
		return (NULL);
	
	list->content = content;
	list->next = NULL;
	return (list);
}

// typedef struct 	s_list
// {
// void 			*content;
// struct s_list 	*next;
// } 				t_list;