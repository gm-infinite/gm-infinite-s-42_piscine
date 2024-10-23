/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:39:26 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/14 11:56:46 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	check;

	i = 1;
	check = 0;
	while (i < length)
	{
		if (!(f(tab[i - 1], tab[i]) < 0))
			return (0);
		i++;
	}
	return (1);
}
