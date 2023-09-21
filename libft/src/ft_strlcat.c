/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:20:30 by adpassar          #+#    #+#             */
/*   Updated: 2023/04/19 20:55:47 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if ((dstsize <= ft_strlen(dst)))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
/*int main()
{
    char src[] = "cd";
    char dest[] = "ab";
    size_t size = 2;
    ft_strlcat(dest,src,size);
    return 0;
}*/
//char* strcat(char* str1, const char* str2);
/*strcat append the content of string 
str2 at the end of the string str1*/
/*int main()
{
    char str1[100], str2[100];
    strcpy(str1, "Welcome to ");
    strcpy(str2, "our accademy");
    strcat(str1, str2);
    printf("%s",str1);
    return 0;
}*/
//strlcat adds the \n to the end of the string
/*size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    int slen = ft_strlen(src);
    int dlen = ft_strlen(dest);
    printf("%d\n", slen + dlen);
}*/
