/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:54:16 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/13 15:58:38 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
    int c;
    int a;

    c = 70;
    a = isalnum(c);
    printf("%d \n", a);
    return (0);
}
*/
