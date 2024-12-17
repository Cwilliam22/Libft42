/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:52:10 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 13:55:32 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	while ((char)a != *str)
	{
		if (!*str)
			return (NULL);
		str++;
	}
	return ((char *)str);
}

/*
#include <stdio.h>
int main(void)
{
    const char chaine[] = "Lausanne42";
    char letter = 'b';
    printf("%s \n", ft_strchr(chaine, letter));
    return (0);
}
*/
// (l.11) => renvoie un pointeur vers la position trouvée;
