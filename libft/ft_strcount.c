/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qvan-der <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:27:45 by qvan-der          #+#    #+#             */
/*   Updated: 2018/11/12 20:27:49 by qvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/libft.h"

int	ft_strcount(const char *s, int c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			i++;
		s++;
	}
	if (c == '\0')
		return (1);
	return (i);
}
