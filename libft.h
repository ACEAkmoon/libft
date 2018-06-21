#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
//# include <string.h>

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

void 			*ft_memset(void *memptr, char val, size_t num);
void			ft_bzero(void *memptr, size_t num);
void			*ft_memcpy(void *destptr, const void *srcptr, size_t num);
void			*ft_memccpy(void *destptr, const void *srcptr, int stop, size_t num);
void			*ft_memmove(void *destptr, const void *srcptr, size_t num);
void			*ft_memchr(const void *memptr, int val, size_t num);
int				ft_memcmp(const void *memptr1, const void *memptr2, size_t num);

void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_stralloc(const char *str);

int				ft_strlen(char *str);
char			*ft_strdup(const char *src);
char			*ft_strcpy(char *destptr, const char *src);
char			*ft_strncpy(char *destptr, const char *srcptr, unsigned int num);
char			*ft_strcat(char *destptr, char *srcptr);
char			*ft_strncat(char *destptr, char *srcptr, int num);
unsigned int	ft_strlcat(char *destptr, char *srcptr, unsigned int size);
const char		*ft_strchr(const char *string, int symbol);
const char		*ft_strrchr(const char *string, int symbol);
const char		*ft_strstr(const char *string1, char *string2);
const char		*ft_strnstr(const char *string1, char *string2, size_t num);
int				ft_strcmp(const char *string1, const char *string2);
int				ft_strncmp(const char *string1, const char *string2, size_t num);
int				ft_atoi(const char *string);

char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strcrl(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			*ft_itoa(int n);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putendl(char const *str);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);

int				ft_isspace(int character);
int				ft_isalpha(int character);
int				ft_isdigit(int character);
int				ft_isalnum(int character);
int				ft_isascii(int character);
int				ft_isprint(int character);
int				ft_islower(int character);
int				ft_isupper(int character);
int				ft_tolower(int character);
int				ft_toupper(int character);

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem));

#endif
