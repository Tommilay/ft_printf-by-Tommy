/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tny-onin <tny-onin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 13:49:20 by tny-onin          #+#    #+#             */
/*   Updated: 2026/01/30 12:12:02 by tny-onin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	totrim(const char *set, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmps1;
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) - 1;
	while (s1[i] && totrim(set, s1[i]))
		i++;
	while (len > i && totrim(set, s1[len]))
		len--;
	tmps1 = ft_substr(s1, i, (len - i + 1));
	return (tmps1);
}

static int	totrim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
