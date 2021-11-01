/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:01:34 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/22 09:05:40 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
int	*ft_range(int min, int max)
{
	int	*r;
	int	i;
	int	k;

	i = max - min;
	r = malloc(4 * i);
	if (min < max)
	{
		if (r == NULL)
		{
			return (NULL);
		}
		k = 0;
		while (k < i)
		{
			r[k] = min;
			min++;
			k++;
		}
		return (r);
	}
	return (0);
}
