/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:50:42 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 13:55:10 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_jsp(size_t len, unsigned int start, char *dst, char const *s)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	len_s;
	size_t	i;

	i = 0;
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		dst = malloc(sizeof(char));
		if (!dst)
			return (NULL);
		dst[0] = '\0';
		return (dst);
	}
	if (len > len_s - start)
		len = len_s - start;
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	ft_jsp(len, start, dst, s);
	return (dst);
}

/*
#include <stdio.h>
int main(void)
{
	char	str[] = "Lausanne 42 est une école sup";
	int	begin = 10;
	int iteration = 2;
	printf("%s \n", ft_substr(str, begin, iteration));
	return (0);
}
*/
