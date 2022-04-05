/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:14:18 by asantoro          #+#    #+#             */
/*   Updated: 2022/04/05 18:27:42 by asantoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*dst;

	if (lst && del && *lst)
	{
		while (lst && *lst)
		{
			dst = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = dst;
		}
		*lst = NULL;
	}
}
