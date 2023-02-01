/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboncine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:26:33 by aboncine          #+#    #+#             */
/*   Updated: 2022/10/07 12:23:41 by aboncine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*b1;
	unsigned char	*b2;

	i = 0;
	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	if (n > 0)
	{
		while (b1[i] && b2[i] && i < n)
		{
			if (b1[i] != b2[i])
				return (b1[i] - b2[i]);
			i++;
		}
		if (i != n)
			return (b1[i] - b2[i]);
	}
	return (0);
}
