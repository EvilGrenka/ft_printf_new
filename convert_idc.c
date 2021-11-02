/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_idc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:19:33 by rnoriko           #+#    #+#             */
/*   Updated: 2021/10/19 17:19:34 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_chrdup(long n)
{
	char	*chr;

	chr = (char *)malloc(sizeof(char ) * 2);
	if (!chr)
		return (NULL);
	chr[1] = '\0';
	chr[0] = n;
	return (chr);
}

char	*ft_convert_c(va_list *ap)
{
	char	*save;

	save = ft_chrdup((unsigned char)va_arg(*ap, int));
	return (save);
}

char	*ft_convert_di(va_list *ap, t_format_arg *format_arg)
{
	char		*save;
	int			result_num;

	result_num = va_arg(*ap, int);
	save = ft_itoa(result_num);
	if (*save == '-')
		format_arg->minus = 1;
	return (save);
}
