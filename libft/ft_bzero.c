/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tny-onin <tny-onin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:34:47 by tny-onin          #+#    #+#             */
/*   Updated: 2026/01/30 12:03:40 by tny-onin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*buff;

	buff = (unsigned char *)s;
	while (n > 0)
	{
		*(buff++) = 0;
		n--;
	}
}
