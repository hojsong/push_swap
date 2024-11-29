/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:18:45 by hojsong           #+#    #+#             */
/*   Updated: 2022/12/15 19:19:52 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	**str;
	int		*a;
	int		*c;
	int		*m;
	int		size;

	if (argc <= 1)
		ft_error(1);
	size = args(argc, argv);
	str = ft_split(size, argc, argv);
	a = ft_start(size, str);
	sort_start_chk(a, size);
	c = ft_start(size, str);
	allfree(str, size);
	c = ft_sort(c, size);
	m = ft_minit(size);
	ft_alg(a, c, m);
	return (0);
}

void	ft_alg(int *a, int *c, int *m)
{
	int	*b;

	b = malloc(sizeof(int) * m[0]);
	ft_sort_start(a, b, c, m);
}

void	ft_sort_start(int *a, int *b, int *c, int *m)
{
	int	i;

	i = 0;
	if (m[0] > 5)
	{
		al1(a, b, m, c);
		al2(a, b, c, m);
	}
	else
		al3(a, b, c, m);
	free(b);
	b = NULL;
	free(c);
	c = NULL;
}
