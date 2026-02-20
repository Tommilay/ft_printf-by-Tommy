/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tny-onin <tny-onin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:22:43 by tny-onin          #+#    #+#             */
/*   Updated: 2026/01/30 12:03:27 by tny-onin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c);

int	ft_atoi(const char *nptr)
{
	int		i;
	long	result;
	int		sign;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if ((nptr[i] == '+') || (nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while ((nptr[i] != '\0') && ft_isdigit(nptr[i]))
	{
		result *= 10;
		result += nptr[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}

int	ft_isspace(int c)
{
	if (((c >= 9) && (c <= 13)) || c == 32)
		return (1);
	return (0);
}
