#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void 			*ft_memset(void *memptr, char val, size_t num);
void			ft_bzero(void *memptr, size_t num);
void			*ft_memcpy(void *destptr, const void *srcptr, size_t num);
void			*ft_memccpy(void *destptr, const void *srcptr, int stop, size_t num);
void			*ft_memmove(void *destptr, const void *srcptr, size_t num);
void			*ft_memchr(const void *memptr, int val, size_t num);
int				ft_memcmp(const void *memptr1, const void *memptr2, size_t num);

/*void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);

char			*ft_stralloc(const char *s);
char			*ft_strallocc(const char *s, char c);
char			*ft_stpcpy(char *dst, const char *src);
char			*ft_stpcpyc(char *dst, const char *src, char c);
unsigned int	ft_strcount(const char *s, char c);
char			*ft_strqdupc(const char **s1, char c);
size_t			ft_strlenc(const char *s, char c);
void			ft_strfill(char **tab, const char *s, char c);

int				ft_strlen(char *str);
char			*ft_strdup(const char *s1);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t n);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *s1, const char *s2);
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);

char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_clr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			*ft_itoa(int n);
void			ft_putchar(char c);
void			ft_putstr(char const *str);
void			ft_putendl(char const *str);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);

int				ft_isspace(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_islower(int c);
int				ft_isupper(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem));
*/

#endif
