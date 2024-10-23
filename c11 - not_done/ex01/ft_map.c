/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:00:43 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/14 11:38:04 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*temp;
	int	i;

	temp = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		temp[i] = f(tab[i]);
		i++;
	}
	return (temp);
}
