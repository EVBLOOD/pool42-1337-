/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 08:15:53 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/15 08:47:50 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;
	int	x;

	i = nb;
	x = 0;
	while (i > 0)
	{
		if (nb % i == 0)
			x++;
		i--;
	}
	if (x == 2)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (ft_is_prime(nb) == 0)
	{
		i = ft_find_next_prime(nb + 1);
	}
	return (i);
}
