/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calcs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 10:24:15 by jsprigga          #+#    #+#             */
/*   Updated: 2018/09/09 23:18:38 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ref.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_get_col(t_char *start)
{
	int i;

	i = 0;
	while (start->character != '\n' && start->character != '\0')
	{
		i++;
		start = start->next;
	}
	return (i);
}

int		ft_get_lines(t_char *start)
{
	int i;
	int lines;

	i = 0;
	lines = 0;
	while (start->next)
	{
		if (start->character == '\n' || start->character == '\0')
			lines++;
		start = start->next;
	}
	return (lines);
}

int		ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}
