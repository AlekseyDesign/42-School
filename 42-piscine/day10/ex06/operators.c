/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 22:43:41 by jsprigga          #+#    #+#             */
/*   Updated: 2018/09/04 22:55:13 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putnbr(int nb);

void	ft_op_plus(int n1, int n2)
{
	ft_putnbr(n1 + n2);
	ft_putstr("\n");
}

void	ft_op_minus(int n1, int n2)
{
	ft_putnbr(n1 - n2);
	ft_putstr("\n");
}

void	ft_op_mult(int n1, int n2)
{
	ft_putnbr(n1 * n2);
	ft_putstr("\n");
}

void	ft_op_div(int n1, int n2)
{
	if (n2 == 0)
		ft_putstr("Stop : division by zero\n");
	else
	{
		ft_putnbr(n1 / n2);
		ft_putstr("\n");
	}
}

void	ft_op_mod(int n1, int n2)
{
	if (n2 == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr(n1 % n2);
		ft_putstr("\n");
	}
}
