/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:38:11 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/13 12:58:19 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	p = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
