/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbirge-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 13:17:50 by dbirge-c          #+#    #+#             */
/*   Updated: 2017/12/06 13:18:27 by dbirge-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Retourne la taille de la liste a partir de la tete donnee en parametre.
*/

#include "libft.h"

size_t	ft_list_size(t_list *begin)
{
	t_list	*current;
	size_t	counter;

	counter = 0;
	current = begin;
	while (current)
	{
		current = current->next;
		counter++;
	}
	return (counter);
}
