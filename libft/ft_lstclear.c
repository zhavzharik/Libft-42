/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abridger <abridger@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 10:05:12 by abridger          #+#    #+#             */
/*   Updated: 2021/07/25 16:19:33 by abridger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*curr;

	temp = NULL;
	curr = NULL;
	if (*lst && del)
		curr = *lst;
	while (curr)
	{
		temp = curr;
		del(curr->content);
		curr = curr->next;
		free(temp);
	}
	*lst = NULL;
}
