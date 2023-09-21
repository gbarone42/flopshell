/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 07:21:07 by adpassar          #+#    #+#             */
/*   Updated: 2023/04/19 20:52:06 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)(lst->content);
	free(lst);
}
// lst : is the node to clear
// del : is the address of the function used to delete the content 
