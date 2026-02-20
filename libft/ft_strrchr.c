/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tny-onin <tny-onin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 08:56:50 by tny-onin          #+#    #+#             */
/*   Updated: 2026/01/30 12:11:54 by tny-onin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	lc;

	i = ft_strlen(str);
	lc = (char)c;
	while (i >= 0)
	{
		if (str[i] == lc)
			return ((char *) &str[i]);
		i--;
	}
	return (NULL);
}
