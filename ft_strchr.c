/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 07:01:17 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/03/29 21:19:33 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
