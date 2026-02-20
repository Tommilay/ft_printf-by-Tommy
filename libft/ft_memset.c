/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tny-onin <tny-onin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:53:18 by tny-onin          #+#    #+#             */
/*   Updated: 2026/01/30 12:09:04 by tny-onin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*buff;

	buff = (unsigned char *)s;
	while (n > 0)
	{
		*(buff++) = (unsigned char)c;
		n--;
	}
	return (s);
}
