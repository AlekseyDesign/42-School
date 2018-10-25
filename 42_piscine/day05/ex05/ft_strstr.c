/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 19:10:42 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/28 22:58:09 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int size;
	int i;
	int j;

	size = 0;
	i = 0;
	j = 0;
	while (to_find[size] != '\0')
		size++;
	if (!size)
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			if (j == size - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return ((char *)0);
}
