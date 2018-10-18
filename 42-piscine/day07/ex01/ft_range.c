/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:26:47 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/30 15:29:29 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;

	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	if (!(range = malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (max >= min)
	{
		range[max - min - 1] = max - 1;
		max--;
	}
	return (range);
}
