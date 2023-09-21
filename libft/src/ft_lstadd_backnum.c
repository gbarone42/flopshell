/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_backnum.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:44:01 by adpassar          #+#    #+#             */
/*   Updated: 2023/07/04 17:09:47 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../../inc/push_swap.h"

void	ft_lstadd_backnum(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
		new->next = NULL;
	}
	else
		*lst = new;
}
