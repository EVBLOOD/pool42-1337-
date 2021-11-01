/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 06:35:24 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/07 11:23:49 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(int i)
{
	char	nub;

	if (i < 10)
	{
		nub = '0' + i;
		write(1, &nub, 1);
	}
	else
	{
		ft_putchar(i / 10);
		ft_putchar(i % 10);
	}
}

void	ft_content(int a, int b)
{
	if (a <= 9)
	{
		write(1, "0", 1);
	}
	ft_putchar(a);
	write(1, " ", 1);
	if (b <= 9)
	{
		write(1, "0", 1);
	}
	ft_putchar(b);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_content(a, b);
			if (a < 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
