/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 13:32:08 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/30 15:33:48 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*strdup;
	int		i;

	strdup = malloc(sizeof(*src));
	if (strdup == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		strdup[i] = src[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
