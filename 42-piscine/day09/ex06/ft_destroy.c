/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 23:17:49 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/30 23:53:32 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (factory[i])
	{
		while (factory[i][j])
		{
			free(factory[i][j]);
			j++;
		}
		free(factory[i]);
		j = 0;
		i++;
	}
	free(factory);
}
