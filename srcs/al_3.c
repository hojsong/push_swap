/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   al_3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:12:21 by hojsong           #+#    #+#             */
/*   Updated: 2022/12/14 21:40:25 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	al2(int *a, int *b, int *c, int *m)
{
	int	s;

	while (m[1] != 0)
	{
		s = find_max_b(b, m);
		ft_rbrr_exe(b, m, s);
		if (a[m[0] - 1] == c[m[2] - 1] && b[0] < a[0])
			ft_pa(a, b, &m[0], &m[1]);
		else if (a[m[0] - 1] < b[0] && b[0] < a[0])
			ft_pa(a, b, &m[0], &m[1]);
		else if (a[0] < b[0])
			ft_ra(a, &m[0]);
		else if (a[m[0] - 1] > b[0])
			ft_rra(a, &m[0]);
	}
	findmin(a, c, m);
}

void	ft_rbrr_exe(int *b, int *m, int s)
{
	if (s > m[1] / 2)
		while (s++ < m[1])
			ft_rrb(b, &m[1]);
	else
		while (s-- > 0)
			ft_rb(b, &m[1]);
}

int	find_max_b(int *b, int *m)
{
	int	i;
	int	max;
	int	s;

	s = 0;
	i = 0;
	max = -2147483648;
	while (i < m[1])
	{
		if (b[i] > max)
		{
			max = b[i];
			s = i;
		}
		i++;
	}
	return (s);
}

void	findmin(int *a, int *c, int *m)
{
	int	i;
	int	s;

	s = 0;
	i = 0;
	while (i < m[0])
	{
		if (a[i] == c[0])
			break ;
		i++;
	}
	if (i > m[0] / 2)
		while (s++ < m[0] - i)
			ft_rra(a, &m[0]);
	else
		while (s++ < i)
			ft_ra(a, &m[0]);
}
