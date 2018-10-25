/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 20:15:36 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/29 20:43:15 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char *argv[])
{
	if (argc == 1)
	{
		while (*argv[0] != '\0')
			ft_putchar(*argv[0]++);
		ft_putchar('\n');
	}
	return (0);
}
