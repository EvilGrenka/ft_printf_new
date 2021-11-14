/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:54:35 by rnoriko           #+#    #+#             */
/*   Updated: 2021/11/14 15:50:28 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

typedef struct s_format_arg
{
	char	flag;
	int		width;
	int		precision;
	char	spec_type;
	int		minus;
	int		field;
	int		show;
	char	plus;
	char	sharp;
	int		sharp_x;
}				t_format_arg;

char			*ft_sharp(char *save, t_format_arg *format_arg);
char			*ft_addplus_space(char *save, t_format_arg format_arg);

int				ft_is_all_st(char spec_type);
int				ft_isnum(char c);
int				ft_isnump(char c);

char			*ft_chrdup(long n);
char			*ft_convert_c(va_list *ap);
char			*ft_convert_di(va_list *ap, t_format_arg *format_arg);

char			*ft_itoa_st(size_t num);
char			*ft_convert_p(size_t num, char *set, t_format_arg format_arg);
char			*ft_convert(size_t num, const char *set, int base);
char			*ft_convert_uxp(va_list *ap, t_format_arg format_arg);

int				ft_printf(const char *format, ...);
int				ft_parse(const char **format, va_list *ap);
int				ft_save(va_list *ap, t_format_arg format_arg);
int				ft_save_putout(t_format_arg f_arg, char *save);

t_format_arg	ft_init_format_arg(char character, int num);
t_format_arg	ft_get_flag(const char **format, t_format_arg format_arg);
t_format_arg	ft_get_field(const char **format, va_list *ap,
					t_format_arg format_arg);
int				ft_get_precision(const char **format, va_list *ap);

void			ft_putright(char *save, t_format_arg format_arg);
char			*ft_putright_num(char *save, t_format_arg *format_arg);
void			ft_putleft(char *save, t_format_arg format_arg);
void			ft_putleft_num(char *save, t_format_arg *format_arg);

void			ft_putout(char *save, t_format_arg format_arg);
void			ft_putzero(char *save, t_format_arg format_arg);
int				ft_max(int a, int b);
int				ft_min(int a, int b);
int				ft_abs(int a);

#endif
