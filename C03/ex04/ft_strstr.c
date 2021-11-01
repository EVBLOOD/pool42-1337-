/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:51:37 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/11 18:43:47 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;

	count = 0;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		while (*to_find == *str)
		{
			if (!*(to_find + 1))
			{
				return (str - count);
			}
			count++;
			to_find++;
			str++;
		}
		to_find -= count;
		count = 0;
		str++;
	}
	return (0);
}
