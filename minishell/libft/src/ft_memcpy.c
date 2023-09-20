/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:05:58 by adpassar          #+#    #+#             */
/*   Updated: 2023/04/19 20:53:16 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
	{
		return (0);
	}
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
memcpy function copies n bytes from memory area src
to memory area dest, memory must not overlap, use memmove
if memory areas does overlap
*/
/*
int main()
{
    char dest[] = "sonounadonna";
    char src[] = "ciaosonogiorgia";
    size_t n = 2;
    ft_memcpy(dest,src,n);
    printf("%s", src);
    printf("%s\n", dest);
    memcpy(dest,src,n);
    printf("%s", src);
    printf("%s", dest);
    return 0;
}
*/
