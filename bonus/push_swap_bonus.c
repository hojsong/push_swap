/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:04:43 by hojsong           #+#    #+#             */
/*   Updated: 2022/12/15 18:59:33 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/push_swap.h"

int	main(int argc, char **argv)
{
	char	**str;
	int		*a;
	int		*b;
	int		*m;
	int		size;

	if (argc <= 1)
		ft_error(1);
	size = args(argc, argv);
	str = ft_split(size, argc, argv);
	a = ft_start(size, str);
	b = malloc(sizeof(int) * size);
	m = ft_minit(size);
	ft_cmd_exe(a, b, m);
	free(b);
	b = NULL;
	free(a);
	a = NULL;
	return (0);
}

void	ft_cmd_exe(int *a, int *b, int *m)
{
	char	*c;
	int		i;

	c = malloc(sizeof(char) * 5);
	while (1)
	{
		i = read(0, c, BUFFER_SIZE);
		if (i <= 0)
			break ;
		else
			ft_cmd(c, a, b, m);
	}
	checker(a, m);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_cmd(char *c, int *a, int *b, int *m)
{
	if (ft_strcmp(c, "sa\n"))
		ft_sa(a);
	else if (ft_strcmp(c, "sb\n"))
		ft_sb(b);
	else if (ft_strcmp(c, "ss\n"))
		ft_ss(a, b);
	else if (ft_strcmp(c, "pa\n"))
		ft_pa(a, b, &m[0], &m[1]);
	else if (ft_strcmp(c, "pb\n"))
		ft_pb(a, b, &m[0], &m[1]);
	else if (ft_strcmp(c, "ra\n"))
		ft_ra(a, &m[0]);
	else if (ft_strcmp(c, "rb\n"))
		ft_rb(b, &m[1]);
	else if (ft_strcmp(c, "rr\n"))
		ft_rr(a, b, &m[0], &m[1]);
	else if (ft_strcmp(c, "rra\n"))
		ft_rra(a, &m[0]);
	else if (ft_strcmp(c, "rrb\n"))
		ft_rrb(b, &m[1]);
	else if (ft_strcmp(c, "rrr\n"))
		ft_rrr(a, b, &m[0], &m[1]);
	else
		ft_error(1);
}

void	checker(int *a, int *m)
{
	int	i;

	if (m[1] != 0)
	{
		write(1, "KO\n", 3);
		return ;
	}
	i = -1;
	while (++i < m[0] - 1)
	{
		if (a[i] > a[i + 1])
		{
			write(1, "KO\n", 3);
			return ;
		}
	}
	write(1, "OK\n", 3);
}
