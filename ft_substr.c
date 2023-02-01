/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboncine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:50:53 by aboncine          #+#    #+#             */
/*   Updated: 2022/10/07 12:23:54 by aboncine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = 0;
	if (start >= ft_strlen(s))
		j = 0;
	else if (ft_strlen(s) - start < len)
		j = ft_strlen(s) - start;
	else
		j = len;
	p = (char *) malloc(sizeof(char) * (j + 1));
	if (!p)
		return (NULL);
	while (i < j)
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
