/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tny-onin <tny-onin@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:45:02 by tny-onin          #+#    #+#             */
/*   Updated: 2026/01/30 12:34:32 by tny-onin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_w(char const *str, char c);
static char		*dup_w(const char *str, int start, int end);
static void		*free_array(char **array, int j);

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		index;

	array = malloc((count_w(s, c) + 1) * sizeof(char *));
	if (!array || !s)
		return (NULL);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= (int)ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if (((s[i] == c) || (i == (int)ft_strlen(s))) && (index >= 0))
		{
			array[j] = dup_w(s, index, i);
			if (!array[j++])
				return (free_array(array, j - 1));
			index = -1;
		}
	}
	array[j] = NULL;
	return (array);
}

static int	count_w(char const *str, char c)
{
	int	i;
	int	count;
	int	int_mot;

	i = 0;
	count = 0;
	int_mot = 0;
	while (str[i])
	{
		if (str[i] != c && int_mot == 0)
		{
			int_mot = 1;
			count++;
		}
		else if (str[i] == c)
			int_mot = 0;
		i++;
	}
	return (count);
}

static char	*dup_w(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static void	*free_array(char **array, int j)
{
	while (j >= 0)
	{
		free(array[j]);
		j--;
	}
	free(array);
	return (NULL);
}
