/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:35:03 by hpino-mo          #+#    #+#             */
/*   Updated: 2023/10/16 16:41:07 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*nodo;

	aux = NULL;
	if (!lst || !del)
		return (NULL);
	while (lst)
	{
		nodo = ft_lstnew(NULL);
		if (!nodo)
		{
			ft_lstclear(&aux, del);
			return (0);
		}
		nodo->content = f(lst->content);
		ft_lstadd_back(&aux, nodo);
		lst = lst->next;
	}
	return (aux);
}
