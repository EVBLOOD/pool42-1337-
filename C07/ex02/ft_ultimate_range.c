/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:49:22 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/22 09:15:09 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	k;

	if (min >= max)
	{
		*range = (int *)0;
		return (0);
	}
	k = min;
	*range = malloc(4 * (max - min));
	if (*range == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (max - k);
}
