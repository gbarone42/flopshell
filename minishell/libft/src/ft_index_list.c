/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:22:02 by adpassar          #+#    #+#             */
/*   Updated: 2023/06/22 16:38:39 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

// static t_stack	*get_next_min(t_stack **stack)
// {
// 	t_stack	*head;
// 	t_stack	*min;
// 	int		has_min;

// 	min = NULL;
// 	has_min = 0;
// 	head = *stack;
// 	if (head)
// 	{
// 		while (head)
// 		{
// 			if ((head->index == -1) && (!has_min || head->value < min->value))
// 			{
// 				min = head;
// 				has_min = 1;
// 			}
// 			head = head->next;
// 		}
// 	}
// 	return (min);
// }

// void	index_stack(t_stack **stack)
// {
// 	t_stack	*head;
// 	int		index;

// 	index = 0;
// 	head = get_next_min(stack);
// 	while (head)
// 	{
// 		head->index = index++;
// 		head = get_next_min(stack);
// 	}
// }
