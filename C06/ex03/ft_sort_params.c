/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:11:38 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/17 14:56:46 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] || b[i])
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}

void	ft_puts(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*go;

	if (argc == 1)
		return (0);
	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				go = argv[i];
				argv[i] = argv[j];
				argv[j] = go;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (argv[i])
		ft_puts(argv[i++]);
}
