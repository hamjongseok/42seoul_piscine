/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jham <jham@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:47:19 by jham              #+#    #+#             */
/*   Updated: 2021/10/26 19:34:59 by jham             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int		*temp;
	int		i;

	i = 0;
	temp = malloc(sizeof(int) * length);
	while (i < length)
	{
		temp[i] = f(tab[i]);
		i++;
	}
	return (temp);
}
