/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcapt <wcapt@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:54:38 by wcapt             #+#    #+#             */
/*   Updated: 2024/10/13 15:58:51 by wcapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int				sgn;
	int				i;
	int				result;

	i = 0;
	sgn = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 45)
	{
		sgn = -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sgn);
}
