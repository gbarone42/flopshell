/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:10:10 by adpassar          #+#    #+#             */
/*   Updated: 2023/07/04 17:03:23 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_lstdelfirst(t_stack **stack)
{
	t_stack	*tmp;

	if ((*stack)->next)
	{
		tmp = *stack;
		(*stack) = (*stack)->next;
		free (tmp);
	}
	else
	{
		free (*stack);
		*stack = NULL;
	}
}
