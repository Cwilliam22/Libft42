/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:51:04 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 13:55:15 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack && !len)
		return (0);
	if (needle[0] == '\0' || needle == haystack)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (haystack[i + j] == '\0' && needle[j] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
    char search[] = "thiss";
    char chaine[] = "fuck this fucking function";
    int n = 24;
    printf("%s \n", ft_strnstr(chaine, search, n));
    return (0);
}
*/
