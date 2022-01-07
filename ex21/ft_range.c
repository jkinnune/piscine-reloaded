/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkinnune <jkinnune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:08:30 by jkinnune          #+#    #+#             */
/*   Updated: 2021/10/29 18:35:22 by jkinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*j;
	int	i;

	if (min >= max)
		return (NULL);
	j = (int *)malloc(sizeof(*j) * (max - min));
	if (!j)
		return (0);
	i = 0;
	while (min < max)
	{
		j[i] = min;
		i++;
		min++;
	}
	return (j);
}
