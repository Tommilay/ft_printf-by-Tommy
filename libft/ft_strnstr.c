/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tny-onin <tny-onin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 10:47:55 by tny-onin          #+#    #+#             */
/*   Updated: 2026/02/04 15:03:15 by tny-onin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (((i + j) < len) && (big[i + j] == little[j]))
		{
			j++;
			if (little[j] == '\0')
				return ((char *) &big[i]);
			if (big[i + j] == '\0')
				return (NULL);
		}
		i++;
	}
	return (NULL);
}
