/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:58:48 by adpassar          #+#    #+#             */
/*   Updated: 2023/04/19 20:55:44 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (0);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = 0;
	return (s3);
}
/*char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	char	*cpy;

	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s1 && s2 && new)
	{
		cpy = new;
		while (*s1 != '\0')
		{
			*new++ = *s1++;
		}
		while (*s2 != '\0')
		{
			*new++ = *s2++;
			*new = '\0';
		}
	}
	else
	{
		return (NULL);
	}
	return (cpy);
}*/
