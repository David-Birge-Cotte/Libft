/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbirge-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:24:25 by dbirge-c          #+#    #+#             */
/*   Updated: 2017/11/09 16:24:26 by dbirge-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Alloue (avec malloc(3)) et retourne une chaine de caractères
** “fraiche” terminée par un ’\0’ représentant l’entier n passé
** en paramètre. Les nombres négatifs doivent être gérés. Si l’allocation
** échoue, la fonction renvoie NULL.
*/

char	*ft_itoa(int n)
{
	char	*str;
	char	*tmp;
	long	l;

	if (!(str = ft_strnew(0)))
		return (NULL);
	if (!(tmp = ft_strnew(1)))
		return (NULL);
	l = (long)n;
	l = l < 0 ? -l : l;
	if (l == 0)
		str[0] = '0';
	while (l)
	{
		tmp[0] = (char)(l % 10) + 48;
		if (!(str = ft_strjoin(tmp, str)))
			return (NULL);
		l = l / 10;
	}
	if (n < 0)
	{
		if (!(str = ft_strjoin((char*)"-", str)))
			return (NULL);
	}
	return (str);
}
