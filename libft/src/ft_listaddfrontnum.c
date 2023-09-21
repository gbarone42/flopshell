/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listaddfrontnum.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:30:04 by adpassar          #+#    #+#             */
/*   Updated: 2023/07/04 17:08:40 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../../inc/push_swap.h"

void	ft_lstadd_frontnum(t_stack **lst, int n)
{
	head = (*lst);
	lst->head = n;
}
