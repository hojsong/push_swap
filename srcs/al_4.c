/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   al_4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:52:44 by hojsong           #+#    #+#             */
/*   Updated: 2022/12/15 19:48:12 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	sort_check_a(int *a, int *c, int *m)
{
	int	i;

	i = 0;
	if (a[0] < a[m[0] - 1] && a[m[0] - 1] != c[m[2] - 1])
		return (1);
	while (i < m[0] - 1)
	{
		if (a[i] > a[i + 1])
		{
			if (a[i] != c[m[2] - 1])
				return (1);
		}
		i++;
	}
	return (0);
}

void	sort_start_chk(int *a, int argc)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		if (a[i] > a[i + 1])
			return ;
		i++;
	}
	exit(0);
}

void	ft_4sort(int *a, int *b, int *c, int *m)
{
	while (m[0] != 3 && sort_check_a(a, c, m))
	{
		if (a[0] == c[0] || a[0] == c[3])
			ft_pb(a, b, &m[0], &m[1]);
		else if (a[1] == c[0] || a[1] == c[3])
			ft_ra(a, &m[0]);
		else
			ft_rra(a, &m[0]);
	}
	ft_3sort(a, m[0]);
	ft_pa(a, b, &m[0], &m[1]);
	findmin(a, c, m);
}
