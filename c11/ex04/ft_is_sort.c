/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jham <jham@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:48:15 by jham              #+#    #+#             */
/*   Updated: 2021/10/26 17:48:17 by jham             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		a;
	int		b;
	int		i;

	b = 0;
	i = 0;
	while (++i < length)
	{
		if ((a = (*f)(tab[i - 1], tab[i])) != 0)
		{
			if (a < 0)
				a = -1;
			else
				a = 1;
		}
		if (a != b && a != 0 && b != 0)
			return (0);
		if (a != 0)
			b = a;
	}
	return (1);
}
