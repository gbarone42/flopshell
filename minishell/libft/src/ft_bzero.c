/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:27:39 by adpassar          #+#    #+#             */
/*   Updated: 2022/10/10 18:40:52 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_bzero(void *str, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		*(char *)(str + i) = '\0';
		i++;
	}
	return ;
}
/*int main()
{
    char str[] = "melliamopedro";
    size_t n = 2;
    ft_bzero(str, n);
    printf("%s", str);
    return 0;
}*/
