/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_raise.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <jbyttner@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 02:00:29 by jbyttner          #+#    #+#             */
/*   Updated: 2016/02/14 21:13:09 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lisp.h"

void	error_raise(int *errn, int errint)
{
	*errn = errint;
	if (*errn == ERR_WRONG_TYPE)
		ft_putendl("Error: Wrong type for args.");
	else if (*errn == ERR_NO_MEM)
		ft_putendl("Error: System out of memory");
	else if (*errn == ERR_NOT_IMPLEMENTED)
		ft_putendl("Error: Not implemented");
	else if (*errn == ERR_NOT_DEFINED)
		ft_putendl("Error: Variable not defined");
	else
		ft_putendl("Error: Unspecified");
}
