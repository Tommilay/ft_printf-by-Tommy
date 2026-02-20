/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tny-onin <tny-onin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 09:09:28 by tny-onin          #+#    #+#             */
/*   Updated: 2026/02/12 09:39:32 by tny-onin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_digit(int n);

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;
	int		i;

	len = nbr_digit(n);
	nb = n;
	i = len - 1;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 9)
	{
		str[i] = (nb % 10) + 48;
		nb /= 10;
		i--;
	}
	str[i] = nb + 48;
	str[len] = '\0';
	return (str);
}

static int	nbr_digit(int n)
{
	int	nbr;
	int	count;

	nbr = n;
	count = 0;
	if (nbr <= 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}
