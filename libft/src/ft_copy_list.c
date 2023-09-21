/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:03:09 by adpassar          #+#    #+#             */
/*   Updated: 2023/07/04 17:03:45 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

t_stack	*ft_copy_list(t_stack *stack)
{
	t_stack	*copy;

	copy = ft_lstnewnum (stack->value);
	while (stack->next != NULL)
	{
		stack = stack->next;
		ft_lstadd_backnum(&copy, ft_lstnewnum(stack->value));
	}
	return (copy);
}
