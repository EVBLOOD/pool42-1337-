/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 10:49:18 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/14 14:13:01 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int	ft_lengh(char *c)
{
	int	i;

	i = 0;
	while (*c)
	{
		i++;
		c++;
	}
	c -= i;
	return (i);
}

int	isvalide(int i, char *c)
{
	int	j;

	j = 0;
	if (i == 0)
		return (0);
	i = 0;
	while (c[i])
	{
		j = i + 1;
		while (c[j])
		{
			if (c[i] == c[j])
				return (0);
			j++;
		}
		if (c[i] == '+' || c[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_change(int nbr, int i, char *c)
{
	if (nbr >= i)
	{
		ft_change(nbr / i, i, c);
	}
	write(1, &c[nbr % i], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = ft_lengh(base);
	if (isvalide(i, base))
		ft_change(nbr, i, base);
}
