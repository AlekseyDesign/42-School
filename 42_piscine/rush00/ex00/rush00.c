/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 15:08:41 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/26 18:20:08 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	head(int x, int y)
{
	int ini_x;

	ini_x = x;
	while (x != 0)
	{
		if (x == 1 || x == ini_x)
			ft_putchar('o');
		else
			ft_putchar('-');
		x--;
	}
	ft_putchar('\n');
}

void	body(int x, int y)
{
	int ini_x;
	int ini_y;

	ini_x = x;
	ini_y = y;
	if (y < 2)
		return ;
	while (y >= 3)
	{
		x = ini_x;
		while (x > 0)
		{
			if (x == 1 || x == ini_x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			x--;
		}
		ft_putchar('\n');
		y--;
	}
}

void	tail(int x, int y)
{
	int ini_x;

	ini_x = x;
	if (y < 2)
		return ;
	while (x != 0)
	{
		if (x == 1 || x == ini_x)
			ft_putchar('o');
		else
			ft_putchar('-');
		x--;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	head(x, y);
	body(x, y);
	tail(x, y);
}
