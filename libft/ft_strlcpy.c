/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <jbyttner@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:13:38 by jbyttner          #+#    #+#             */
/*   Updated: 2015/11/29 18:36:58 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	length;

	length = ft_strlen(src) + 1;
	if (!(size))
		return (length);
	size = size > length ? length : size;
	dst[--size] = '\0';
	while (size-- > 0)
	{
		dst[size] = src[size];
	}
	return (length);
}
