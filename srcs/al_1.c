/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   al_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:25:29 by hojsong           #+#    #+#             */
/*   Updated: 2022/12/15 19:35:14 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_chk_1(int *a, int *m)
{
	int	i;

	i = 0;
	while (i < m[4] - 2)
	{
		if (a[i] > a[i + 1] && a[i] != m[3])
			return (i + 1);
		i++;
	}
	if (a[i] > a[0] && a[i] != m[3])
		return (i + 1);
	return (0);
}

int	sort_chk(int *a, int *c, int *m)
{
	int	i;

	i = 0;
	while (i < m[4] - 2)
	{
		if (a[i] > a[i + 1] && a[i] != c[m[2] - 1])
			return (1);
		i++;
	}
	return (0);
}
