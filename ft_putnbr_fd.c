/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:52:27 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/11 13:55:37 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	if (nbr < 10)
		ft_putchar_fd(nbr + '0', fd);
}
//utilise un "long" pour gérer les overflows
//"long" a une plus grande caopacité que le "int" (sécurité)

/*
int main(void)
{
	int	a = 45;
	ft_putnbr_fd(a, 1);
	return (0);
}
*/
