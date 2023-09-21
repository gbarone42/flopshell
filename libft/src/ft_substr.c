/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:08:42 by adpassar          #+#    #+#             */
/*   Updated: 2023/04/19 20:56:17 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;
	unsigned int	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
	{
		sub_str = malloc(sizeof(char) * 1);
		if (sub_str == NULL)
			return (NULL);
		sub_str[0] = 0;
		return (sub_str);
	}
	sub_str = malloc(sizeof(char) * (len + 1));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while ((char)s[start] && (size_t)i < len)
	{
		sub_str[i] = (char)s[start];
		i++;
		start++;
	}
	sub_str[i] = 0;
	return (sub_str);
}
/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	sub = (char *) malloc (sizeof (*s) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (i >= start && j < len)
		{
			sub[j] = s[i];
			j++;
		}
		i++;
	}
	sub[j] = 0;
	return (sub);
}*/