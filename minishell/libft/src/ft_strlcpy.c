/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:27:34 by adpassar          #+#    #+#             */
/*   Updated: 2023/04/19 20:55:51 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] != '\0' && i < size -1)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*int main()
{
    const char src[] = "generalemao";
    char dest[] = "brucelee";
    size_t size = 5;
    printf("%ld\n", ft_strlcpy(dest,src,size));
    strncpy(dest,src,size);
    printf("%s\n", dest);
    return 0;
}*/