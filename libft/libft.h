/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/21 11:20:43 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/11/16 07:22:36 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 10
# define LL_INT long long int
# define ULL_INT unsigned long long int

# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <math.h>

# define E_MESS01	"\e[31mError:	Number of bytes to copy is undefined.\n"
# define E_MESS02	"\e[31mError:	String is a pointer to NULL.\n"
# define E_MESS03	"\e[31mError:	No bytes are written.\n"
# define E_MESS04	"\e[31mError:	String is not NULL terminated.\n"
# define E_MESS05	"\e[31mError:	Compared strings overlap.\n"
# define E_MESS06	"\e[31mError:	Character is not part of the SAT.\n"
# define E_MESS07	"\e[31mError:	Integer is undefined.\n"
# define E_MESS08	"\e[31mError:	Array is a pointer to NULL.\n"
# define E_MESS09	"\e[31mError:	String is just comprised of padding.\n"

# define NUM_BUFF  10
# define LINE_SIZE 50

/*
** Short_hand
*/

# define ACTIVE    buff->active
# define POS       buff->pos
# define AB_POS    (buff->pos % BUFF_SIZE)
# define BUFF      buff->buff
# define B_FD      buff->fd
# define RET       buff->ret
# define L         buff->l
# define LINE      buff->line

# define BUFF_END 	(BUFF[POS] == '\0' && RET < BUFF_SIZE)
# define BASE_STR 	static char *b = "0123456789ABCDEF";
# define BASE_STR2 	char *base = "0123456789abcdef";
# define SKP_BLK	while (*tmp == c) ++tmp;

typedef struct	s_buff
{
	char		buff[BUFF_SIZE];
	char		active;
	int			fd;
	int			ret;
	int			pos;
	int			l;
	char		*line;
}				t_buff;
typedef struct		s_split
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	l;
}					t_split;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef	struct		s_flags
{
	int		has_flags;
	int		plus;
	int		minus;
	int		zero;
	int		hash;
	int		space;
	int		prec;
	int		ip;
	int		padding;
	char	pad;
}					t_flags;

typedef struct		s_mods
{
	int	has_mod;
	int	ln;
	int	sht;
	int	u_sign;
	int	zee;
	int	jay;
}					t_mods;

typedef struct		s_matrix
{
	int				**matrix;
	unsigned int	x;
	unsigned int	y;
}					t_matrix;

typedef struct		s_mat_mul
{
	unsigned int	c;
	unsigned int	d;
	unsigned int	k;
	int				sum;
	struct s_matrix	multiply;
}					t_mat_mul;

void				ft_putarr(char **arr);
void				ft_putarr_fd(char **arr, int fd);
void				ft_toupper2(char *str);
int					ft_isalpha2(char *str);
t_matrix    		ft_matrix_translation(t_matrix c, int x, int y, int z);
t_matrix    		ft_matrix_scale(t_matrix m, float scale);
t_matrix    		ft_x_rotation(t_matrix c, float beta);
t_matrix    		ft_y_rotation(t_matrix c, float beta);
t_matrix    		ft_z_rotation(t_matrix c, float beta);
t_matrix			ft_matrix_transpose(t_matrix source);
t_matrix			ft_matrix_sub(t_matrix first, t_matrix second);
t_matrix			ft_matrix_multiply(t_matrix first, t_matrix second);
t_matrix			ft_matrix_identity(unsigned int size);
t_matrix			ft_matrix_clear(t_matrix matrix);
int					ft_matrix_destroy(t_matrix matrix);
t_matrix			ft_matrix_create(unsigned int x, unsigned int y);
t_matrix			ft_matrix_add(t_matrix first, t_matrix second);
void				error(char *str);
int     			ft_intlen(int *arr);
int     			ft_intlen2(int **arr);
int     			*ft_array_to_int(char **arr);
int					ft_strlen3(char ***map);
int					ft_strlen2(char **arr);
void				ft_print_memory(const void *addr, size_t size);
void				ft_print_hex(unsigned char num);
void				ft_put2d(char **arr);
char				***ft_array_push3(char ***arr, char **line);
int					**ft_int_array_push3(int **arr, int *line);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				*ft_memcpy_bwd(void *s1, const void *s2, size_t n);
char				**ft_strnew2(size_t size);
char				*rm_padding(char *str);
int					get_next_line(const int fd, char **line);
char				**ft_strsplit(char const *str, char c);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
char				*ft_itoa(int n);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strmap(char const *s, char (*f)(char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_striter(char *s, void (*f)(char *));
char				*ft_strnew(size_t size);
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strtrim(const char *s);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
void				ft_strdel(char **as);
void				ft_memdel(void **ap);
void				*ft_memalloc(size_t size);
void				ft_strclr(char *s);
int					ft_strnqu(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
void				*ft_memalloc(size_t size);
void				ft_putstr(const char *s);
void				ft_putstr_fd(const char *s, int fd);
int					ft_atoi(const char *src);
void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void				*ft_memchr(const void *s1, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *s1, const void *s2, size_t n);
void				*ft_memmove(void *s1, const void *s2, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(const char *s, int c);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strdup(const char *s1);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *s);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *s1, const char *s2, size_t n);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				*ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));

void				ft_putstr_w(char *str, int *w, int inc);

#endif
