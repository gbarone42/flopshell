/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:01:31 by adpassar          #+#    #+#             */
/*   Updated: 2023/04/19 20:53:26 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*result;
	int		i;

	i = 0;
	result = str;
	while (i < (int)n)
	{
		result[i] = c;
		i++;
	}
	return (result);
}
/*int main()
{
    char str[] = "meme";
    int c = '@';
    size_t n = 2;
    ft_memset(str, c ,n);
    printf("%s",str);
}*/
