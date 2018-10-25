/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:15:26 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/30 15:17:56 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*table;
	int	i;

	if (min >= max)
		return (0);
	table = (int*)malloc((max - min) * sizeof(int));
	if (table == NULL)
		return (0);
	i = 0;
	while (min <= max - 1)
	{
		table[i] = min++;
		i++;
	}
	*range = table;
	return (i);
}
