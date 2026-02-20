/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tny-onin <tny-onin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:14:26 by tny-onin          #+#    #+#             */
/*   Updated: 2026/02/05 11:05:24 by tny-onin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t lendest)
{
	size_t	lsrc;
	size_t	ldest;

	lsrc = ft_strlen(src);
	ldest = ft_strlen(dest);
	if (lendest <= ldest)
		ldest = lendest;
	if (lendest == ldest)
		return (ldest + lsrc);
	if (lsrc < lendest - ldest)
		ft_memcpy(dest + ldest, src, lsrc + 1);
	else
	{
		ft_memcpy(dest + ldest, src, lendest - ldest - 1);
		dest[lendest - 1] = '\0';
	}
	return (ldest + lsrc);
}
