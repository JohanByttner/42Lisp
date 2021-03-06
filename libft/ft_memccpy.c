/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <jbyttner@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:33:42 by jbyttner          #+#    #+#             */
/*   Updated: 2016/02/08 18:21:40 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dest, const void *restrict src, int c,
			size_t n)
{
	size_t		i;
	char		*dest_c;
	const char	*src_c;

	i = 0;
	dest_c = dest;
	src_c = src;
	while (i < n)
	{
		dest_c[i] = src_c[i];
		if (src_c[i] == c)
			return (&(dest_c[i + 1]));
		i++;
	}
	return (0);
}
