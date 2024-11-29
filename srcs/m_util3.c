/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_util3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:19:30 by hojsong           #+#    #+#             */
/*   Updated: 2022/12/07 10:31:34 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_rra(int *a, int *amax)
{
	int	i;
	int	sw;

	write(1, "rra\n", 4);
	sw = a[*amax - 1];
	i = *amax - 1;
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[i] = sw;
}

void	ft_rrb(int *b, int *bmax)
{
	int	i;
	int	sw;

	write(1, "rrb\n", 4);
	sw = b[*bmax - 1];
	i = *bmax - 1;
	while (i > 0)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[i] = sw;
}

void	ft_rrr(int *a, int *b, int *amax, int *bmax)
{
	int	i;
	int	sw;

	write(1, "rrr\n", 4);
	sw = a[*amax];
	i = *amax - 1;
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[i] = sw;
	sw = b[*bmax];
	i = *bmax - 1;
	while (i > 0)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[i] = sw;
}
