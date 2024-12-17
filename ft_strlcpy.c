/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:51:39 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 13:55:22 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < (size - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
//La fonction copie une chaine src dans une chaine dst.
//Si la chaine dst est < 0 pas possible. => size_t
//size_t ne vérifie pas si dstsize = 0 du coup on utilise un if pour régler ça.
//(dstsize - 1) parce qu'il faut garder de la place pour '\0'.
//Pas oublier de mettre '\0' à la fin de la string src;
//Retourner la taille de la string src.
