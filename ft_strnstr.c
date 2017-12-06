/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbirge-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:32:11 by dbirge-c          #+#    #+#             */
/*   Updated: 2017/11/09 17:32:12 by dbirge-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whole_word(const char *haystack, const char *needle)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(needle))
	{
		if (haystack[i] != needle[i])
			return (0);
		i++;
	}
	return (1);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*result;

	i = 0;
	result = (char*)haystack;
	if (!needle[0])
		return (result);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0] && is_whole_word(&haystack[i], needle)
		&& (i + ft_strlen(needle) <= len))
		{
			result = (char*)&haystack[i];
			return (result);
		}
		i++;
	}
	return (NULL);
}
