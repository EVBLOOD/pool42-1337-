/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 18:11:53 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/14 19:26:37 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	int	result;
	int	a;
	int	b;

	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	b = ft_fibonacci(index - 1);
	a = ft_fibonacci(index - 2);
	result = a + b;
	return (result);
}
