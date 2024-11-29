/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   al_5.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:17:20 by hojsong           #+#    #+#             */
/*   Updated: 2022/12/15 19:49:30 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	al3(int *a, int *b, int *c, int *m)
{
	if (m[0] == 2)
	{
		if (a[0] > a[1])
			ft_sa(a);
	}
	else if (m[0] == 3)
		ft_3sort(a, m[0]);
	else if (m[0] == 4)
		ft_4sort(a, b, c, m);
	else if (m[0] == 5)
		ft_3hsort(a, b, c, m);
}

void	ft_3sort(int *a, int amax)
{
	if (a[0] > a[1] && a[1] > a[2])
	{
		ft_ra(a, &amax);
		ft_sa(a);
	}
	else if (a[0] > a[2] && a[2] > a[1])
		ft_ra(a, &amax);
	else if (a[1] > a[0] && a[0] > a[2])
		ft_rra(a, &amax);
	else if (a[1] > a[2] && a[2] > a[0])
	{
		ft_ra(a, &amax);
		ft_sa(a);
		ft_rra(a, &amax);
	}
	else if (a[2] > a[0] && a[0] > a[1])
		ft_sa(a);
}

void	ft_3hsort(int *a, int *b, int *c, int *m)
{
	while (m[0] != 3)
	{
		if (a[0] < c[2])
			ft_pb(a, b, &m[0], &m[1]);
		else
			ft_r_rr_a(a, c, m);
	}
	ft_5sort(a, b, m);
	while (m[1] != 0)
		ft_pa(a, b, &m[0], &m[1]);
	findmin(a, c, m);
}

void	ft_r_rr_a(int *a, int *c, int *m)
{
	int	i;
	int	s;

	s = 0;
	i = 1;
	while (i < m[0])
	{
		if (a[i] < c[2])
			break ;
		if (a[m[0] - i] < c[2])
			break ;
		i++;
	}
	if (a[i] < c[2])
		while (s++ < i)
			ft_ra(a, &m[0]);
	else
		while (s++ < i)
			ft_rra(a, &m[0]);
}

void	ft_5sort(int *a, int *b, int *m)
{
	if (a[0] > a[1] && a[1] > a[2])
		ft_ra(a, &m[0]);
	else if (a[0] > a[2] && a[2] > a[1])
		ft_ra(a, &m[0]);
	else if (a[1] > a[0] && a[0] > a[2])
		ft_rra(a, &m[0]);
	else if (a[1] > a[2] && a[2] > a[0])
	{
		ft_ra(a, &m[0]);
		if (b[0] < b[1])
			ft_ss(a, b);
		else
			ft_sa(a);
		ft_rra(a, &m[0]);
	}
	if (a[0] > a[1] && b[0] < b[1])
		ft_ss(a, b);
	else if (a[0] > a[1])
		ft_sa(a);
	else if (b[0] < b[1])
		ft_sb(b);
}
