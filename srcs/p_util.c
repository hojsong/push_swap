/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_util.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:19:36 by hojsong           #+#    #+#             */
/*   Updated: 2022/12/15 17:01:25 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	*ft_start(int argc, char **argv)
{
	int	i;
	int	*result;

	i = 0;
	result = malloc(sizeof(int) * argc);
	while (i < argc)
	{
		result[i] = ft_atoi(argv[i]);
		i++;
	}
	ft_rchk(result, argc);
	return (result);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	pm;

	pm = 1;
	result = 0;
	i = ft_issp(str);
	if (str[i] == '\0' || str == NULL)
		ft_error(1);
	i += ft_pm(str[i], &pm);
	if (str[i] == '\0')
		ft_error(1);
	while (str[i] >= '0' && str[i] <= '9')
	{
		ft_sum(&result, str[i], pm);
		i++;
	}
	if (str[i] != '\0')
		ft_error(1);
	return (result);
}

int	ft_issp(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	return (i);
}

int	ft_pm(char c, int *pm)
{
	if (c == '-' || c == '+')
	{
		if (c == '-')
			*pm = -1;
		return (1);
	}
	return (0);
}
