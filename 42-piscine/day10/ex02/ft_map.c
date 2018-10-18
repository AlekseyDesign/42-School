/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:11:32 by jsprigga          #+#    #+#             */
/*   Updated: 2018/09/04 22:05:55 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*temp;
	int		i;

	if (!(temp = malloc(length * sizeof(int))))
		return (NULL);
	i = 0;
	while (i < length)
	{
		*(temp + i) = f(*(tab + i));
		i++;
	}
	return (temp);
}
