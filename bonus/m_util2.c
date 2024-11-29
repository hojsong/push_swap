/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_util2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:19:29 by hojsong           #+#    #+#             */
/*   Updated: 2022/12/15 17:03:27 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/push_swap.h"

void	ft_ra(int *a, int *amax)
{
	int	i;
	int	sw;

	sw = a[0];
	i = 0;
	while (i < *amax - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i] = sw;
}

void	ft_rb(int *b, int *bmax)
{
	int	i;
	int	sw;

	sw = b[0];
	i = 0;
	while (i < *bmax - 1)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[i] = sw;
}

void	ft_rr(int *a, int *b, int *amax, int *bmax)
{
	int	i;
	int	sw;

	sw = a[0];
	i = 0;
	while (i < *amax - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i] = sw;
	sw = b[0];
	i = 0;
	while (i < *bmax - 1)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[i] = sw;
}
