/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:53:14 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 13:55:45 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	size_t			i;
	char			j;

	i = 0;
	j = 1;
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	if (!src && !dst)
		return (NULL);
	if (dst > src)
	{
		j = -1;
		ptr_dst += len - 1;
		ptr_src += len - 1;
	}
	while (i < len)
	{
		*ptr_dst = *ptr_src;
		ptr_dst += j;
		ptr_src += j;
		i++;
	}
	return (dst);
}
