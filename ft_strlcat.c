/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboncine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:15:09 by aboncine          #+#    #+#             */
/*   Updated: 2022/10/07 13:14:10 by aboncine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_s;
	size_t	s_s;
	size_t	j;

	i = 0;
	s_s = ft_strlen(src);
	d_s = ft_strlen(dst);
	j = ft_strlen(dst);
	if (size == 0)
		return (s_s);
	if (size < d_s)
		return (s_s + size);
	while (j < size - 1 && src[i])
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (s_s + d_s);
}
