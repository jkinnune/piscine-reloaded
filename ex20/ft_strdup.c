/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkinnune <jkinnune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:39:21 by jkinnune          #+#    #+#             */
/*   Updated: 2021/10/29 16:57:37 by jkinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*duplicate;

	size = 0;
	while (src[size])
	{
		size++;
	}
	duplicate = (char *)malloc(sizeof(char) * (size + 1));
	if (duplicate == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		duplicate[i] = src[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
