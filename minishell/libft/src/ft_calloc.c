/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:55:43 by adpassar          #+#    #+#             */
/*   Updated: 2023/04/19 20:49:28 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		return (malloc(0));
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset ((unsigned char *)ptr, 0, nmemb * size);
	return (ptr);
}
