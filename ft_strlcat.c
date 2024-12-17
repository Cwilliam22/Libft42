/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:51:45 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 13:55:23 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	m;

	i = 0;
	j = ft_strlen(dst);
	m = j;
	if (size == 0 && !dst)
		return (ft_strlen(src));
	if (size <= j)
		return (size + ft_strlen(src));
	while (src[i] && j < (size - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (m + ft_strlen(src));
}
//Concaténer deux strings
//Retourne la longueur de la string dst si la concatenation possible
//Si dstsize < dst => return (dstsize + strlen(src))
/*Si la concaténation n'a pas été entièremment possible
=> return (dstsize + strlen(src))*/
