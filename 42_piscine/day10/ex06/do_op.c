/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 22:44:13 by jsprigga          #+#    #+#             */
/*   Updated: 2018/09/04 22:55:20 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operators.h"
#include "support.h"

int		main(int argc, char **argv)
{
	int		num1;
	int		num2;
	char	op;

	if (argc != 4)
		return (0);
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	op = argv[2][0];
	if (op == '-' || op == '+' || op == '/' || op == '%' || op == '*')
	{
		if (op == '+')
			ft_op_plus(num1, num2);
		if (op == '-')
			ft_op_minus(num1, num2);
		if (op == '*')
			ft_op_mult(num1, num2);
		if (op == '/')
			ft_op_div(num1, num2);
		if (op == '%')
			ft_op_mod(num1, num2);
		return (0);
	}
	ft_putstr("0\n");
	return (0);
}
