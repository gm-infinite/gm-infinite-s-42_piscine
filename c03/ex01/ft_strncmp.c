/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:48:39 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/07 15:52:29 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return ((s1[i] - s2[i]));
}
