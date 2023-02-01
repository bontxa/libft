/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboncine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:18:23 by aboncine          #+#    #+#             */
/*   Updated: 2022/10/07 12:21:53 by aboncine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_str_create(long int n, char *p, long int count)
{
	if (n < 0)
		n = n * -1;
	p[count] = '\0';
	count--;
	while (n > 9)
	{
		p[count] = (n % 10) + 48;
		n = n / 10;
		count--;
	}
	p[count] = n + 48;
	count--;
	if (count == 0)
		p[0] = '-';
	return (p);
}

char	*ft_itoa(int n)
{
	char		*p;
	long int	count;
	long int	n2;

	count = 1;
	n2 = (long int)n;
	if (n2 < 0)
	{
		count++;
		n2 = n2 * -1;
	}
	while (n2 > 9)
	{
		n2 = n2 / 10;
		count++;
	}
	p = (char *) malloc(sizeof(char) * (count + 1));
	if (!p)
		return (NULL);
	p = ft_str_create((long int)n, p, count);
	return (p);
}
