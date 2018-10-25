/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 23:22:44 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/31 00:42:21 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base != 1)
	{
		if ((base % 2) == 0)
			return (1 + ft_collatz_conjecture(base / 2));
		else
			return (1 + ft_collatz_conjecture(3 * base + 1));
	}
	return (0);
}
