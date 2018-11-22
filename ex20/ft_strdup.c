/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 15:00:36 by judumay           #+#    #+#             */
/*   Updated: 2018/11/05 15:14:45 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	str = (char*)malloc(sizeof(char) * (i + 1));
	while (j <= i)
	{
		str[j] = src[j];
		j++;
	}
	return (str);
}
