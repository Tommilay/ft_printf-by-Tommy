/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tny-onin <tny-onin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:20:35 by tny-onin          #+#    #+#             */
/*   Updated: 2026/01/30 12:03:51 by tny-onin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;
	size_t			total;

	i = 0;
	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	total = nmemb * size;
	tmp = malloc(total);
	if (!tmp)
		return (NULL);
	while (i < total)
		tmp[i++] = 0;
	return (tmp);
}
