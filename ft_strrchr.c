/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboncine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:41:06 by aboncine          #+#    #+#             */
/*   Updated: 2022/10/07 12:23:48 by aboncine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;

	p = (char *)s;
	i = ft_strlen(p);
	if (c == '\0')
		return (p + i);
	i--;
	while (i >= 0)
	{
		if (*(p + i) == (unsigned char)c)
			return (p + i);
		i--;
	}
	p = NULL;
	return (p);
}
