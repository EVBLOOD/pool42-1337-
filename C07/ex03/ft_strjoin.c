/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:37:06 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/22 09:13:53 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	ft_lengh(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	len_strs(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_lengh(strs[i]);
		i++;
	}
	len += (ft_lengh(sep) * (size - 1) + 1);
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*arr;

	i = 0;
	if (size == 0)
	{
		arr = (char *)malloc(sizeof(char));
		*arr = 0;
		return (arr);
	}
	len = len_strs(size, strs, sep);
	arr = (char *)malloc(sizeof(char) * len);
	if (!(arr))
		return (0);
	*arr = '\0';
	while (i < size)
	{
		ft_strcat(arr, strs[i]);
		if (i < (size - 1))
			ft_strcat(arr, sep);
		i++;
	}
	return (arr);
}
