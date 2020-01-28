/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzenz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:19:12 by tzenz             #+#    #+#             */
/*   Updated: 2019/09/18 18:14:22 by tzenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_words(char const *s, char c)
{
	int		cu;
	int		i;

	i = 0;
	cu = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			cu++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (cu);
}

static	int	ft_len(char const *s, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		l;

	if (!s)
		return (NULL);
	if (!(str = (char **)ft_memalloc(sizeof(char **) * (ft_words(s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_words(s, c))
	{
		l = 0;
		if (!(str[i] = ft_strnew(ft_len(&s[j], c) + 1)))
			return (NULL);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str[i][l++] = s[j++];
		str[i][l] = '\0';
	}
	str[i] = 0;
	return (str);
}
