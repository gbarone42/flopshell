/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:46:37 by adpassar          #+#    #+#             */
/*   Updated: 2023/04/19 20:52:57 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;
	unsigned char	character;

	i = 0;
	str = (unsigned char *)s;
	character = (unsigned char)c;
	while ((size_t)i < n)
	{
		if (*str == character)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}
/*int main()
{
    size_t n = 2;
    char s[] = "peppapig";
    unsigned char c = 'a';
    printf("%p",ft_memchr(s,c,n));
}*/
