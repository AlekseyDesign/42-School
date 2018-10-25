/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 21:17:41 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/28 21:46:39 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;
	int				size_neg;
	int				trigger;

	i = 0;
	len_dest = 0;
	len_src = 0;
	size_neg = size;
	trigger = 0;
	while (src[len_src] != '\0')
		len_src++;
	while ((src[i] != '\0') && size_neg - 1 > 0)
	{
		dest[i] = src[i];
		i++;
		size_neg--;
		trigger = 1;
	}
	if (trigger || len_src == 0)
		dest[i] = '\0';
	return (len_src);
}
