/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tny-onin <tny-onin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:01:09 by tny-onin          #+#    #+#             */
/*   Updated: 2026/02/05 10:27:32 by tny-onin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;

	if (!dest && !src)
		return (NULL);
	tmpdst = (unsigned char *)dest;
	tmpsrc = (unsigned char *)src;
	while (n > 0)
	{
		*(tmpdst++) = *(tmpsrc++);
		n--;
	}
	return (dest);
}
