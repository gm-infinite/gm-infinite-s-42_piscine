/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:03:41 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/08 08:24:48 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;
	unsigned int	destsize;
	unsigned int	srcsize;

	srcsize = ft_strlen(src);
	i = 0;
	k = 0;
	while (dest[i])
		i++;
	destsize = i;
	if (size == 0 || size <= destsize)
		return (size + srcsize);
	while (src[k] && i < size - 1)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (destsize + srcsize);
}
