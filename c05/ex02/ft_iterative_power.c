/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:55:38 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/10 14:46:54 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	check;

	check = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		check *= nb;
		power--;
	}
	return (check);
}
