/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:24:50 by adpassar          #+#    #+#             */
/*   Updated: 2023/04/19 20:50:04 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
    printf("%d", ft_isascii(c));
    return 0;
}*/
