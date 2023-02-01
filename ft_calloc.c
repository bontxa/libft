/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboncine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:07:13 by aboncine          #+#    #+#             */
/*   Updated: 2022/10/07 13:07:10 by aboncine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	i;

	i = nmemb * size;
	if (nmemb != 0 && i / nmemb != size)
		return (NULL);
	p = malloc(i);
	if (!p)
		return (NULL);
	ft_bzero(p, i);
	return (p);
}
