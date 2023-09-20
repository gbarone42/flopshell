/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:31:14 by adpassar          #+#    #+#             */
/*   Updated: 2023/07/04 14:25:00 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (true);
	}
	else
	{
		return (false);
	}
}
/*int main()
{
    char c = '7';
    printf("%d", ft_isprint(c));
    return 0;
}*/
