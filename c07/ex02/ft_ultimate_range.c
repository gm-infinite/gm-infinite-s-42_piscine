/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:42:05 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/10 11:45:00 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*p;
	int		i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	p = (int *)malloc(sizeof(int) * (max - min));
	if (p == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	*range = p;
	return (i);
}
