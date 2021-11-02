/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_spec_types.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:22:15 by rnoriko           #+#    #+#             */
/*   Updated: 2021/10/19 17:22:18 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_all_st(char spec_type)
{
	return (spec_type == 'c'
		|| spec_type == 's'
		|| spec_type == 'p'
		|| spec_type == 'd'
		|| spec_type == 'i'
		|| spec_type == 'u'
		|| spec_type == 'x'
		|| spec_type == 'X'
		|| spec_type == '%'
		|| spec_type == 'o');
}

int	ft_isnum(char c)
{
	return (c == 'd'
		|| c == 'i'
		|| c == 'u'
		|| c == 'x'
		|| c == 'X'
		|| c == 'o');
}

int	ft_isnump(char c)
{
	return (c == 'd'
		|| c == 'i'
		|| c == 'u'
		|| c == 'x'
		|| c == 'X'
		|| c == 'p'
		|| c == 'o');
}
