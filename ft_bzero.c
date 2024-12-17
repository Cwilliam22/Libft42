/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:54:31 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 13:56:05 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
	n--;
	}
}

/*
#include <stdio.h>
int main(void)
{
    int array[5] = {1, 2, 3, 4, 5};
    int i = 0;

    printf("Avant bzero:\n");
    while (i < 5)
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");

    bzero(array, sizeof(int) * 5);
	// 5 entiers (20 octets sur une machine 32 bits)

    i = 0;
    printf("Après bzero:\n");
    while (i < 5) {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
    return (0);
}
*/
