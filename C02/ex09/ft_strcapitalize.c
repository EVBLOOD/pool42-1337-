/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:55:31 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/10 13:28:00 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
		i++;
	}
	str -= i;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	skip;

	skip = 0;
	ft_strupcase(str);
	while (*str)
	{
		if (skip != 0 && *str >= 'A' && *str <= 'Z')
		{
			if (*(str - 1) >= 'a' && *(str - 1) <= 'z' )
			{
				*str += 32;
			}
			if (*(str - 1) >= 'A' && *(str - 1) <= 'Z')
			{
				*str += 32;
			}
			if (*(str - 1) >= '0' && *(str - 1) <= '9')
			{
				*str += 32;
			}
		}
		str++;
		skip++;
	}
	return (str - skip);
}
