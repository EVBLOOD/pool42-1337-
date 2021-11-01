/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:41:45 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/14 17:55:07 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	k;

	if (power == 0)
		return (1);
	k = nb;
	k *= ft_recursive_power(nb, power - 1);
	return (k);
}
