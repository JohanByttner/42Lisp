/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ltype_is_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <jbyttner@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 01:42:27 by jbyttner          #+#    #+#             */
/*   Updated: 2016/02/14 01:58:03 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lisp.h"

int		ltype_is_num(t_lvar *var)
{
	if (var->type == T_INTP)
		return (1);
	else
		return (0);
}
