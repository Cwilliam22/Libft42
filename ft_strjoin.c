/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:51:52 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 13:55:25 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	size_total;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	size_total = ft_strlen(s1) + ft_strlen(s2);
	dst = malloc(sizeof(char) * (size_total + 1));
	if (!dst)
		return (NULL);
	while (*s1)
		dst[i++] = *s1++;
	while (*s2)
		dst[i++] = *s2++;
	dst[i] = '\0';
	return (dst);
}
//if (*src) = if (src[i]) (new notation)
//dst[i++] = src[i++] (false notation) => dst[i++] = *src++ (new notation)
//Pas oublier '\0'
//Si l'une des chaîne est NULL => return NULL
//malloc après la vérification de chaîne NULL !!!
