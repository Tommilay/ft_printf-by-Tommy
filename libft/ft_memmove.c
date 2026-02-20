/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tny-onin <tny-onin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:42:58 by tny-onin          #+#    #+#             */
/*   Updated: 2026/02/05 10:30:24 by tny-onin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	tmpdst = (unsigned char *)dest;
	tmpsrc = (unsigned char *)src;
	if (tmpdst > tmpsrc)
		while (n--)
			tmpdst[n] = tmpsrc[n];
	else
	{
		while (i < n)
		{
			tmpdst[i] = tmpsrc[i];
			i++;
		}
	}
	return (dest);
}
