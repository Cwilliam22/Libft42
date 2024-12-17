/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:54:24 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 13:56:03 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	totalsize;
	void	*ptr;

	totalsize = count * size;
	ptr = malloc(totalsize);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, totalsize);
	return (ptr);
}

/*
#include <stdio.h>
int main(void)
{
	char *str = ft_calloc(10, 1);

	printf("%s \n", str);
	return (0);
}
*/