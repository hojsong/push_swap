/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   al_2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:33:42 by hojsong           #+#    #+#             */
/*   Updated: 2022/12/15 16:51:25 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	al1(int	*a, int *b, int *m, int *c)
{
	int	i;
	int	ser;
	int	as;

	as = 0;
	i = 0;
	ser = (m[0] / 19) + 5;
	while (m[0] != 1 && sort_check_a(a, c, m))
	{
		ser = ft_iser(i, ser, m);
		if (a[0] <= c[i])
			i += ft_rb_exe(&as, a, b, m);
		else if (a[0] <= c[i + ser])
		{
			i += ft_rb_exe(&as, a, b, m);
			as++;
		}
		else
		{
			if (ft_ser_b_r(a, c, m, i + ser) == 1)
				ft_rr_exe(&as, a, b, m);
			else
				ft_rra(a, &m[0]);
		}
	}
}

int	ft_ser_b_r(int *a, int *c, int *m, int si)
{
	int	i;

	i = 1;
	while (i < m[0] && i < 5)
	{
		if (a[i] < c[si])
			return (1);
		else if (a[m[0] - i] < c[si])
			return (-1);
		i++;
	}
	return (1);
}

int	ft_rb_exe(int *as, int *a, int *b, int *m)
{
	while (*as > 0)
	{
		ft_rb(b, &m[1]);
		*as -= 1;
	}
	ft_pb(a, b, &m[0], &m[1]);
	return (1);
}

void	ft_rr_exe(int *as, int *a, int *b, int *m)
{
	if (*as > 0)
	{
		ft_rr(a, b, &m[0], &m[1]);
		*as -= 1;
	}
	else
		ft_ra(a, &m[0]);
}

int	ft_iser(int i, int ser, int *m)
{
	int	s;

	s = ser;
	if (i + ser > m[2] - 2)
		s = m[2] - 2 - i;
	return (s);
}
