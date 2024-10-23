/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:39:00 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/08 10:11:39 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	check;

	check = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		check *= nb;
		nb--;
	}
	return (check);
}
