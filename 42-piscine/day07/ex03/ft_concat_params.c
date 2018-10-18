/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:19:10 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/30 17:06:19 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*args;
	int		x;
	int		y;
	int		z;

	args = malloc((argc) * sizeof(char));
	x = 1;
	z = 0;
	while (x < argc)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			args[z] = argv[x][y];
			z++;
			y++;
		}
		if ((x + 1) < argc)
			args[z] = '\n';
		z++;
		x++;
	}
	args[z - 1] = '\0';
	return (args);
}
