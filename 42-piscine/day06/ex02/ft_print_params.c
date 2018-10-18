/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 20:18:37 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/29 20:43:34 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc > 1)
		while (++i < argc)
		{
			while (*argv[i])
				ft_putchar(*argv[i]++);
			ft_putchar('\n');
		}
	return (0);
}
