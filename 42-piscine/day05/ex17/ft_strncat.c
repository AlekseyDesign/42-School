/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 15:25:42 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/28 19:23:22 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int num_changed;

	num_changed = 0;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		if (nb <= num_changed)
			break ;
		*dest = *src;
		dest++;
		src++;
		num_changed++;
	}
	*dest = '\0';
	return (dest);
}
