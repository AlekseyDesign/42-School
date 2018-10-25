/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 05:36:41 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/31 05:40:25 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_door.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	write(1, "\n", 1);
}

t_bool	close_door(t_door *door)
{
	ft_putstr("Door closing...");
	door->state = CLOSE;
	return (TRUE);
}

t_bool	open_door(t_door *door)
{
	ft_putstr("Door opening...");
	door->state = OPEN;
	return (TRUE);
}

t_bool	is_door_open(t_door *door)
{
	ft_putstr("Door is open ?");
	return (door->state == OPEN);
}

t_bool	is_door_close(t_door *door)
{
	ft_putstr("Door is close ?");
	return (door->state == CLOSE);
}
