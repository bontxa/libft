/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboncine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:15:03 by aboncine          #+#    #+#             */
/*   Updated: 2022/10/03 18:12:27 by aboncine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*p;
	const char	*p2;

	i = 0;
	p = (char *) dest;
	p2 = (const char *) src;
	while (i < n)
	{
		p[i] = p2[i];
		i++;
	}
	return (p);
}
