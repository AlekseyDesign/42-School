/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:45:27 by jsprigga          #+#    #+#             */
/*   Updated: 2018/08/31 03:53:18 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		ft_check_char(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int			ft_count_words(char *str)
{
	int		i;

	i = 0;
	while (*str)
		if (ft_check_char(*str))
			++str;
		else
		{
			++i;
			++str;
			while (*str && !ft_check_char(*str))
				++str;
		}
	return (i);
}

char		*ft_split_words(char **str)
{
	char	*bptr;
	char	*bsptr;
	char	*sptr;

	sptr = *str;
	while (ft_check_char(*sptr))
		++sptr;
	*str = sptr;
	while (!ft_check_char(*sptr))
		++sptr;
	bptr = malloc((sptr - *str) * sizeof(char));
	if (!bptr)
		return (0);
	bsptr = bptr;
	while (sptr > *str)
		*bsptr++ = *((*str)++);
	*bsptr = '\0';
	while (**str && ft_check_char(**str))
		++*str;
	return (bptr);
}

char		**ft_split_whitespaces(char *str)
{
	char	**res;
	char	**bptr;
	int		i;

	i = ft_count_words(str);
	if (!(res = malloc((i + 1) * sizeof(char *))))
		return (0);
	bptr = res;
	while (i--)
		if (!(*bptr++ = ft_split_words(&str)))
			return (0);
	*bptr = (0);
	return (res);
}
