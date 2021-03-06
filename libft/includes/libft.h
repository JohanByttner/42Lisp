/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <jbyttner@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:37:41 by jbyttner          #+#    #+#             */
/*   Updated: 2016/02/08 18:21:25 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

/*
** All library includes should happen in the respective files.
** size_t is included from here
*/

/*
** Typedefs go here
*/

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

/*
** The functions here follow the order in libft.pdf
*/

void			*ft_memset(void *s, int c, size_t n);

void			ft_bzero(void *s, size_t n);

void			*ft_memcpy(void *restrict dest, const void *restrict src,
					size_t n);

void			*ft_memccpy(void *restrict dest, const void *restrict src,
					int c, size_t n);

void			*ft_memmove(void *dest, const void *src, size_t n);

void			*ft_memchr(const void *s, int c, size_t n);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

size_t			ft_strlen(const char *s);

char			*ft_strdup(const char *s);

char			*ft_strcpy(char *dest, const char *src);

char			*ft_strncpy(char *dest, const char *src, size_t n);

size_t			ft_strlcpy(char *dst, const char *src, size_t size);

char			*ft_strcat(char *dest, const char *src);

char			*ft_strncat(char *dest, const char *src, size_t n);

size_t			ft_strlcat(char *dst, const char *src, size_t size);

char			*ft_strchr(const char *s, int c);

char			*ft_strrchr(const char *s, int c);

char			*ft_strstr(const char *haystack, const char *needle);

char			*ft_strnstr(const char *big, const char *little, size_t len);

int				ft_strcmp(const char *s1, const char *s2);

int				ft_strncmp(const char *s1, const char *s2, size_t n);

int				ft_atoi(const char *nptr);

long			ft_strtol(const char *s,
					char **restrict endp, int base);

int				ft_islower(int c);

int				ft_isupper(int c);

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

int				ft_isspace(int c);

int				ft_toupper(int c);

int				ft_tolower(int c);

/*
** Below are optional "Extra" functions from libft.pdf
*/

void			*ft_memalloc(size_t size);

void			ft_memdel(void **ap);

char			*ft_strnew(size_t size);

void			ft_strdel(char **as);

void			ft_strclr(char *s);

void			ft_striter(char *s, void (*f)(char *));

void			ft_striteri(char *s, void (*f)(unsigned int, char *));

char			*ft_strmap(const char *s, char (*f)(char));

char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));

int				ft_strequ(const char *s1, const char *s2);

int				ft_strnequ(const char *s1, const char *s2, size_t n);

char			*ft_strsub(const char *s, unsigned int start, size_t len);

char			*ft_strjoin(const char *s1, const char *s2);

char			*ft_strtrim(const char *s);

char			**ft_strsplit(const char *s, char c);

char			*ft_itoa(int n);

void			ft_putchar(char c);

void			ft_putstr(const char *s);

void			ft_putendl(const char *s);

void			ft_putnbr(int n);

void			ft_putchar_fd(char c, int fd);

void			ft_putstr_fd(const char *s, int fd);

void			ft_putendl_fd(const char *s, int fd);

void			ft_putnbr_fd(int n, int fd);

t_list			*ft_lstnew(const void *content, size_t content_size);

void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));

void			ft_lstadd(t_list **alst, t_list *new);

void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** Below are additional extras
*/

char			*ft_strskip(char *str, const char *skip);

void			*ft_memadjust(void **mem, size_t old_length, size_t new_length);

double			ft_dmax(double i, double j);

double			ft_dmin(double i, double j);

void			*ft_memdup(void *ptr, size_t length);

t_list			*ft_lstlast(t_list *list);

t_list			*ft_lstmerge(t_list *l1, t_list *l2);

int				ft_strisdigit(char *str);

#endif
