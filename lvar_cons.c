/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lvar_cons.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyttner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 18:30:19 by jbyttner          #+#    #+#             */
/*   Updated: 2016/02/14 18:51:50 by jbyttner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lisp.h"

t_lvar		*lvar_cons(t_lvar *a, t_lvar *b, int *errn)
{
	t_llst	*tmp;
	t_lvar	*res;

	if (b->type == T_LLSTP)
	{
		if (!(res = lvar_new()))
		{
			error_raise(errn, ERR_NO_MEM);
			return (NULL);
		}
		tmp = llst_cons(a, b->val->llstp, errn);
		if (*errn)
		{
			error_print_stack("lvar cons (system function)");
			GC_DEC(res);
			return (NULL);
		}
		res->val->llstp = tmp;
		res->type = T_LLSTP;
		GC_INC(b);
		return (res);
	}
	error_raise(errn, ERR_WRONG_TYPE);
	return (NULL);
}
