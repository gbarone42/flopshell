/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 08:17:24 by adpassar          #+#    #+#             */
/*   Updated: 2023/04/19 20:56:14 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*s;

	s = 0;
	if (s1 && set)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		s = (char *)malloc(sizeof(char) * (j - i + 1));
		if (s)
			ft_strlcpy(s, &s1[i], j - i + 1);
	}
	return (s);
}
/*char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*new;

	new = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	if (s1 && set)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > 1)
			j--;
		new = (char *)malloc(sizeof(char) * (j - i + 1));
		if (new)
			ft_strlcpy(new, &s1[i], j - i + 1);
	}
	return (new);
}*/
/*allocates space and returns a copy of f1 with the characters
in 'set' removed from the beginning and the end of the string*/
