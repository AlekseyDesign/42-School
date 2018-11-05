/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 20:04:15 by jsprigga          #+#    #+#             */
/*   Updated: 2018/09/02 22:48:38 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(int	*clues[]);
int		resolve(int *clues[], int line, int column, int f_number);

int		compare(int *clues[], int *clues2[])
{
	int	line;
	int	column;

	line = 0;
	while (line < 9)
	{
		column = 0;
		while (column < 9)
		{
			if (clues[line][column] != clues2[line][column] ||
					clues[line][column] == 0)
				return (0);
			++column;
		}
		++line;
	}
	return (1);
}

void	end(int *clues[], int *clues2[])
{
	resolve(clues, 0, 0, 1);
	resolve(clues2, 0, 0, 9);
	if (compare(clues, clues2))
		display(clues);
	else
		write(1, "Error\n", 6);
}
