/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:18:59 by rnoriko           #+#    #+#             */
/*   Updated: 2021/10/28 09:23:11 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cmp_characters(char c1, char c2)
{
	if ((unsigned char)c1 == (unsigned char)c2)
		return (0);
	return ((unsigned char)c1 - (unsigned char)c2);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*temp_s1;
	char	*temp_s2;
	size_t	limit;

	temp_s1 = (char *)s1;
	temp_s2 = (char *)s2;
	limit = 0;
	while (*temp_s1 && *temp_s2 && limit++ < n)
	{
		if (ft_cmp_characters(*temp_s1, *temp_s2))
			return (ft_cmp_characters(*temp_s1, *temp_s2));
		temp_s1++;
		temp_s2++;
	}
	if (limit < n)
		return (ft_cmp_characters(*temp_s1, *temp_s2));
	return (0);
}
