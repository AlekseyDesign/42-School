/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 15:50:27 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/25 18:09:19 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
}
 int resultat;

 if(nb > 12 || nb < 0)
 return(0);
 resultat = 1;
 while(nb > 0)
 {
	resultat = resultat * nb;
	nb--;
 }
 return(resultat);
}
