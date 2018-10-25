/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 20:44:13 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/29 20:44:15 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	while (--argc >= 1)
	{
		while (*argv[argc])
			ft_putchar(*argv[argc]++);
		ft_putchar('\n');
	}
	return (0);
}
