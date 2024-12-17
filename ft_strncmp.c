/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:51:14 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 13:55:16 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
    char chaine1[] = "ecole€ 42";
    char chaine2[] = "ecolesƒ 42";
    int size;
    size = 3;
    printf("%d \n", ft_strncmp(chaine1, chaine2, size));
    return (0);
}
*/
// (l.25) => Pourquoi unsigned char pour la soustraction ?
