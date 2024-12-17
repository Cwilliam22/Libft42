/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:50:56 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/13 16:02:07 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int a)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)a)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
    char chaine[] = "exercice de con";
    char lettre = 'e';
    printf("%s \n", ft_strrchr(chaine, lettre));
    return (0);
}
*/
