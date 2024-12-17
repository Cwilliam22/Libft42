/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:53:39 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 13:55:53 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_size(long nbr)
{
	size_t	i;

	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*dst;
	long	nbr;
	size_t	size;

	nbr = n;
	size = ft_size(nbr);
	dst = malloc(sizeof(char) * (size + 1));
	if (!dst)
		return (NULL);
	dst[size] = '\0';
	size--;
	if (nbr < 0)
	{
		nbr = -nbr;
		dst[0] = '-';
	}
	while (nbr != 0)
	{
		dst[size--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (n == 0)
		dst[0] = '0';
	return (dst);
}

/*
#include <stdio.h>
int main(void)
{
	int nbr = 42;
	printf("%s \n", ft_itoa(nbr));
	return (0);
}
*/
