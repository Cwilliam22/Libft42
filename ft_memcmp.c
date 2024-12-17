/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:53:25 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 13:55:49 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((n - 1) > 0 && (*ptr_s1 == *ptr_s2))
	{
		ptr_s1++;
		ptr_s2++;
		n--;
	}
	return ((int)(*ptr_s1 - *ptr_s2));
}
//Pourquoi (n - 1)?
//Pas oublier de caster le résultat