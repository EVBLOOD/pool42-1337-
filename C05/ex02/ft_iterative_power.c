/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:30:25 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/14 17:45:10 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	if (power == 0)
		return (1);
	n = nb;
	while (power - 1 != 0)
	{
		n *= nb;
		power--;
	}
	return (n);
}
