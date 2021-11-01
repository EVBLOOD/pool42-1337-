/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:26:02 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/11 15:50:01 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;
	int	i;

	temp = dest;
	i = 0;
	while (*dest)
		dest++;
	while (*src && n != 0)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';
	return (temp);
}
