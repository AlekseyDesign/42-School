/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 21:28:06 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/24 22:10:38 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	count;
	int	len;
	char	ascii;

	len = 0;
	while (str[len])
	{
		len++;
	}
		count = 0;
		while (count < len / 2)
		{
			ascii = str[count];
			str[count] = str[len - count - 1];
			str[len - count - 1] = ascii;
			count++;
		}
		return(str);
}
