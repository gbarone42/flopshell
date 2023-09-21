/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:26:07 by adpassar          #+#    #+#             */
/*   Updated: 2023/04/19 20:55:16 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strdup(const char *s)
{
	char	*pt1;
	int		l;

	l = ft_strlen(s);
	pt1 = malloc(sizeof(char) * (l + 1));
	ft_memcpy(pt1, s, l);
	pt1[l] = '\0';
	return (pt1);
}
/*char	*ft_strdup(const char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	new = malloc(sizeof(char) * (size + 1));
	while (src[size])
		size++;
	if (!(new))
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}*/
/*this funtion returns a pointer to a null-terminated
byte string, which is a duplicate of the string pointed to by str1
the returned pointer must be passed to free to avoid memory leak*/