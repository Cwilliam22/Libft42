/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:19:12 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 19:18:20 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if ((lst != NULL) && (new != NULL))
	{
		new->next = *lst;
		*lst = new;
	}
}

/*(l.17) nouvel element a l'avant de la liste 
(*lst => pointeur sur 1er element)*/

//(l.18) MAJ de la liste en pointant sur le nouvel element de la liste
