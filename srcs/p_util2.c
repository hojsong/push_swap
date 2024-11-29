/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_util2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:19:46 by hojsong           #+#    #+#             */
/*   Updated: 2022/12/15 16:58:11 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_sort(int *a, int amax)
{
	int	*c;
	int	i;
	int	i2;
	int	sw;

	c = a;
	i = 0;
	while (i < amax - 1)
	{
		i2 = i;
		while (i2 >= 0)
		{
			if (c[i2] > c[i2 + 1])
			{
				sw = c[i2];
				c[i2] = c[i2 + 1];
				c[i2 + 1] = sw;
			}
			else
				break ;
			i2--;
		}
		i++;
	}
	return (c);
}

int	*ft_minit(int argc)
{
	int	*m;
	int	i;

	i = 0;
	m = malloc(sizeof(int) * 3);
	m[0] = argc;
	m[1] = 0;
	m[2] = argc;
	return (m);
}

void	ft_error(int i)
{
	if (i == 1)
		write(2, "Error\n", 6);
	exit(0);
}

void	ft_sum(int *result, char s, int pm)
{
	int	i;

	i = s - '0';
	if (*result == 214748364)
	{
		if (i > 7)
			ft_error(1);
	}
	else if (*result > 214748364)
		ft_error(1);
	else if (*result == -214748364)
	{
		if (i > 8)
			ft_error(1);
	}
	else if (*result < -214748364)
		ft_error(1);
	*result = (*result * 10) + (i * pm);
}

void	ft_rchk(int *result, int n)
{
	int	i;
	int	i2;

	i = 0;
	while (i < n - 1)
	{
		i2 = i + 1;
		while (i2 < n)
		{
			if (result[i] == result[i2])
				ft_error(1);
			i2++;
		}
		i++;
	}
}
