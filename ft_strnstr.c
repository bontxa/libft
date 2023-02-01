/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboncine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:35:44 by aboncine          #+#    #+#             */
/*   Updated: 2022/10/07 12:23:45 by aboncine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_c(const char *big, const char *lit, size_t len, size_t i)
{
	size_t	j;

	j = 0;
	while (lit[j])
	{
		if (big[i] == lit[j] && i < len)
		{
			i++;
			j++;
		}
		else
			return (0);
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	check;

	i = 0;
	if (little[i] == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		check = check_c(big, little, len, i);
		if (check == 1)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
