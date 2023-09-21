/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpassar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:44:13 by adpassar          #+#    #+#             */
/*   Updated: 2023/07/04 17:39:33 by adpassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <ctype.h>
# include <stdbool.h>
//# include "../../inc/push_swap.h"

/////////////////////////////////////////////////////////////
typedef struct s_stack
{
	long int				value;
	struct s_stack			*next;
}	t_stack;
//////////////////////////////////////////////////////////////

// typedef e il costruttore
// ifndef inizializzatore di parametri
// the following structure represents a node of our list
//content : data contained in the node
// void * allows to store any kind of data
// next : the adress of the next node, or NULL if the next node is the last one

/////////////////////////////////////////////////////////////
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
////////////////////////////////////////////////////////////

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *src);
int		ft_atoi(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
char	*ft_itoa(int n);
char	**ft_split(const char *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/////////////////////////////////////////////////////////////////////////
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int		ft_lstsize(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
//t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
//////////////////////////////////////////////////////////////////////////
long	int	ft_atoi_long(const char *str);
//////////////////////////////////////////////////////////////////////////
t_stack	*ft_lstnewnum(int num);
void	ft_lstadd_backnum(t_stack **lst, t_stack *new);
t_stack	*ft_lstlastnum(t_stack *lst);
void	ft_free_list(t_stack **lst);
t_stack	*ft_copy_list(t_stack *stack);
int		get_distance(t_stack **stack, int index);
void	index_stack(t_stack **stack);
void	ft_lstadd_frontnum(t_stack **lst, t_stack *new);
int		ft_isspace(int c);
//////////////////////////////////////////////////////////////////////////
//void	ft_putchr(char c);
//void	ft_putstr(char	*str);

#endif
