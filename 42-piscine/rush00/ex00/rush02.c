/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttroll <ttroll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 20:01:21 by ttroll            #+#    #+#             */
/*   Updated: 2018/08/26 21:14:03 by ttroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if ((j == x || j == 1) && i == 1)
				ft_putchar('A');
			else if ((j == x || j == 1) && i == y)
				ft_putchar('C');
			else if ((i == y || i == 1) || (j == x || j == 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
