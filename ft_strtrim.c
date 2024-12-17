/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:50:49 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 13:55:12 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	end;
	size_t	start;
	size_t	i;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	dst = malloc(sizeof(char) * ((end - start) + 1));
	if (!dst)
		return (NULL);
	while (start < end)
		dst[i++] = s1[start++];
	dst[i] = '\0';
	return (dst);
}

/*
#include <stdio.h>
int main(void)
{
	const char chaine[] = "xxHello Worldyy";
	const char no[] = "yx";
	printf("%s \n", ft_strtrim(chaine, no));
	return (0);
}
*/
