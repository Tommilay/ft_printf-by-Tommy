/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tny-onin <tny-onin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:28:51 by tny-onin          #+#    #+#             */
/*   Updated: 2026/02/05 10:16:03 by tny-onin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c);
static int	ft_islower(int c);

int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	return (0);
}

static int	ft_isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	return (0);
}

static int	ft_islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	return (0);
}
