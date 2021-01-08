/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cguiot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:51:27 by cguiot            #+#    #+#             */
/*   Updated: 2020/12/17 14:22:16 by cguiot           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;
	int		u;

	u = 0;
	i = ft_strlen(src);
	if (!(dest = malloc(sizeof(char) * i + 1)))
		return (0);
	while (i > u)
	{
		dest[u] = src[u];
		u++;
	}
	dest[u] = '\0';
	return (dest);
}
