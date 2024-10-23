/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:42:20 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/05 13:18:35 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 'Z' && str[i] >= 'A'))
			str[i] = (str[i] + 32);
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	k;

	k = 1;
	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if ((str[i] <= 'z' && str[i] >= 'a') && k == 1)
		{
			str[i] = str[i] - 32;
			k = 0;
		}
		else if (!((str[i] <= 'z' && str[i] >= 'a') \
		|| (str[i] <= '9' && str[i] >= '0')))
		{
			k = 1;
		}
		else
			k = 0;
		i++;
	}
	return (str);
}
