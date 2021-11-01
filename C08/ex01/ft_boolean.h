/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 09:49:31 by sakllam           #+#    #+#             */
/*   Updated: 2021/08/23 10:34:53 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

# define TRUE		1
# define FALSE		0
# define SUCCESS	0
# define EVEN_MSG 	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define EVEN(nbr)	((nbr % 2) == 0)
typedef int			t_bool;

#endif
