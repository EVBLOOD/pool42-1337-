/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 10:56:23 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/12 11:42:08 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
unsigned int	ft_lengh(char *string)
{
	int	i;

	i = 0;
	while (*string)
	{
		i++;
		string++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	countsrc;
	unsigned int	countdest;
	char			*temp;

	temp = dest;
	countsrc = ft_lengh(src);
	countdest = ft_lengh(dest);
	if (countdest > size)
	{
		return (countsrc + size);
	}
	size -= countdest;
	dest += countdest;
	if (size != 0)
	{
		while (*src && 0 != size - 1)
		{
			*dest++ = *src++;
			size--;
		}
		*dest = '\0';
	}
	dest = temp;
	return (countsrc + countdest);
}
