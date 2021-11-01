/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:02:34 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/17 17:01:00 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	ft_lengh(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ret;
	int		i;

	i = 0;
	ret = malloc(1 * ft_lengh(src));
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
