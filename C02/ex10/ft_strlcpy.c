/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:22:55 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/10 16:21:57 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
int	ft_len(char *src)
{
	int	lengh;

	lengh = 0;
	while (src[lengh])
	{
		lengh++;
	}
	return (lengh);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_len(src));
}
