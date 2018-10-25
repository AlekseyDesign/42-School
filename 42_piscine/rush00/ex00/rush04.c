/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 20:04:15 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/26 20:48:38 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	head(int x, int y)
{
	int i;

	i = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

void	body(int x, int y)
{
	int ini_x;
	int ini_y;

	ini_x = x;
	ini_y = y;
	if (x <= 0 || y <= 0)
		return ;
	if (y < 2)
		return ;
	while (y >= 3)
	{
		x = ini_x;
		while (x > 0)
		{
			if (x == 1 || x == ini_x)
				ft_putchar('B');
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
	int i;

	i = 1;
	if (x <= 0 || y <= 0)
		return ;
	if (y < 2)
		return ;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('C');
		else if (i == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	head(x, y);
	body(x, y);
	tail(x, y);
}
