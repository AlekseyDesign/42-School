/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                       		:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 10:49:53 by jsprigga          #+#    #+#             */
/*   Updated: 2018/09/09 23:18:38 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ref.h"
#include <stdlib.h>

int	main(void)
{
	t_char	*list_char;
	t_char	*start;
	char	**tocompare;
	int		*results;

	list_char = ft_create_elem();
	start = list_char;
	while (read(0, &list_char->character, 1))
	{
		list_char->next = ft_create_elem();
		list_char = list_char->next;
	}
	tocompare = ft_get_colles(ft_get_col(start), ft_get_lines(start));
	results = ft_compare(tocompare, start);
	ft_print_results(results, ft_get_col(start), ft_get_lines(start));
	return (0);
}
