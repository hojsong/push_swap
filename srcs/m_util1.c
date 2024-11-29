/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_util1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:19:26 by hojsong           #+#    #+#             */
/*   Updated: 2022/12/05 19:40:14 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_sa(int *a)
{
	int	i;

	write(1, "sa\n", 3);
	i = a[0];
	a[0] = a[1];
	a[1] = i;
}

void	ft_sb(int *b)
{
	int	i;

	write(1, "sb\n", 3);
	i = b[0];
	b[0] = b[1];
	b[1] = i;
}

void	ft_ss(int *a, int *b)
{
	int	ai;
	int	bi;

	write(1, "ss\n", 3);
	ai = a[0];
	bi = b[0];
	a[0] = a[1];
	b[0] = b[1];
	a[1] = ai;
	b[1] = bi;
}

void	ft_pa(int *a, int *b, int *amax, int *bmax)
{
	int	i;

	if (*bmax == 0)
		return ;
	write(1, "pa\n", 3);
	i = 0;
	while (i < *amax)
	{
		a[*amax - i] = a[*amax - i - 1];
		i++;
	}
	a[0] = b[0];
	i = 0;
	while (i < *bmax - 1)
	{
		b[i] = b[i + 1];
		i++;
	}
	*amax += 1;
	*bmax -= 1;
}

void	ft_pb(int *a, int *b, int *amax, int *bmax)
{
	int	i;

	if (*amax == 0)
		return ;
	write(1, "pb\n", 3);
	i = 0;
	while (i < *bmax)
	{
		b[*bmax - i] = b[*bmax - i - 1];
		i++;
	}
	b[0] = a[0];
	i = 0;
	while (i < *amax - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	*bmax += 1;
	*amax -= 1;
}
