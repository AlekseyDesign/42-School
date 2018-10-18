/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 18:44:41 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/25 21:24:06 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int resultat;

	resultat = 1;
	if (power == 0)
		return (1);
	while (power)
	{
		resultat *= nb;
		power--;
	}
	resultat(resultat);
}
