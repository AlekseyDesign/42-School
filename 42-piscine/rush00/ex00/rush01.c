/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttroll <ttroll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 22:23:09 by ttroll            #+#    #+#             */
/*   Updated: 2018/08/26 22:43:33 by ttroll           ###   ########.fr       */
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
			ft_putchar(47);
		else if (i == x)
			ft_putchar(92);
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
}

void	body(int x, int y)
{
	int ini_x;

	ini_x = x;
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
				ft_putchar('*');
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
			ft_putchar(92);
		else if (i == x)
			ft_putchar(47);
		else
			ft_putchar('*');
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
