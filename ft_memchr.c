/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:53:33 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 13:55:52 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr_s;
	char		ptr_c;

	ptr_s = s;
	ptr_c = (char)c;
	while (n > 0)
	{
		if (*ptr_s == ptr_c)
			return ((void *)ptr_s);
		ptr_s++;
		n--;
	}
	return (NULL);
}
