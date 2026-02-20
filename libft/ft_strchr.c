/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tny-onin <tny-onin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:14:17 by tny-onin          #+#    #+#             */
/*   Updated: 2026/01/30 12:10:17 by tny-onin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc ;

	uc = (unsigned char)c;
	while ((unsigned char)*s != uc)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
