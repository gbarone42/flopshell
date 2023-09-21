/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:18:11 by adpassar          #+#    #+#             */
/*   Updated: 2023/04/19 20:56:01 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	i = 0;
	while ((p1[i] != '\0' || p2[i] != '\0') && (i < n))
	{
		if (p1[i] > p2[i])
			return (1);
		else if (p1[i] < p2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		++i;
	}
	if (i != n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}*/
/*int main()
{
    size_t n = 6;
    char s1[] = "peppapig";
    char s2[] = "pig";
    printf("%d",ft_strncmp(s1,s2,n));
}*/
/*int main()
{
	printf("%d\n",ft_strncmp("test\200", "test\0", 6));
	printf("%d\n",strncmp("test\200", "test\0", 6));
}*/
