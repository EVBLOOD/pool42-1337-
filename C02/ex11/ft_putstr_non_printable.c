/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:21:05 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/10 10:45:56 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_hex(unsigned char inp)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[inp / 16], 1);
	write(1, &hex[inp % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str == 127)
		{
			write(1, "\\", 1);
			ft_hex(*str);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
