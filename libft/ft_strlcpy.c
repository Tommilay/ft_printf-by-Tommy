/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tny-onin <tny-onin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:10:15 by tny-onin          #+#    #+#             */
/*   Updated: 2026/01/30 12:11:05 by tny-onin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;

	n = ft_strlen(src);
	if (size == 0)
		return (n);
	if (n < size)
		ft_memcpy(dst, src, n + 1);
	else
	{
		ft_memcpy(dst, src, size);
		dst[size - 1] = '\0';
	}
	return (n);
}
