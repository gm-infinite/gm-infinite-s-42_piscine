/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:32:09 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/01/29 14:03:57 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempd;
	int	tempm;

	tempd = *a / *b;
	tempm = *a % *b;
	*a = tempd;
	*b = tempm;
}
