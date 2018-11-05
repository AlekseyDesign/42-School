/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 10:26:42 by jsprigga          #+#    #+#             */
/*   Updated: 2018/09/09 23:18:38 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

char	*remove_whitespaces(char *str);
int		parse_parenthesis(char **str);
int		primary_expression(char **str);
int		multiplicate_expression(char **str);
int		eval_expr(char *str);
int		do_op(int nb1, int nb2, char op);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putnbr(int nbr);

#endif
