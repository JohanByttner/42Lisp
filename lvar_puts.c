/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lvar_puts.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <jbyttner@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 14:39:22 by jbyttner          #+#    #+#             */
/*   Updated: 2016/02/14 18:48:02 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lisp.h"

void	lvar_puts(t_lvar *var)
{
	t_llst	*tmp;

	if (var->type == T_INTP)
		int_puts(var->val->intp);
	else if (var->type == T_LLSTP)
	{
		tmp = var->val->llstp;
		printf("( ");
		while (tmp)
		{
			lvar_puts(tmp->val);
			printf(" ");
			tmp = tmp->next;
		}
		printf(")");
	}
}
