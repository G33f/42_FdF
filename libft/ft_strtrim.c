/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 13:00:44 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/15 13:00:47 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_newlen(char const *s)
{
	size_t		len;

	len = ft_strlen(s);
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		len--;
		s++;
	}
	while (*s != '\0')
		s++;
	s--;
	if (len)
		while (*s == ' ' || *s == '\n' || *s == '\t')
		{
			len--;
			s--;
		}
	return (len);
}

char			*ft_strtrim(char const *s)
{
	size_t		len;
	char		*new;
	char		*res;

	if (s == NULL)
		return (NULL);
	len = ft_newlen(s);
	if ((len + 1) < len)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	res = new;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	while (len--)
		*new++ = *s++;
	*new = '\0';
	return (res);
}
