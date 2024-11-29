/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_util3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:34:06 by hojsong           #+#    #+#             */
/*   Updated: 2022/12/15 16:58:55 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	args(int argc, char **argv)
{
	int	i;
	int	i2;
	int	result;
	int	set;

	i = 0;
	result = 0;
	while (++i < argc)
	{
		i2 = 0;
		set = result;
		while (argv[i][i2] != '\0')
		{
			if (argv[i][i2] != ' ' && \
					(argv[i][i2 + 1] == ' ' || argv[i][i2 + 1] == '\0'))
				result++;
			i2++;
		}
		if (i2 == 0 || set == result)
			ft_error(1);
	}
	return (result);
}

char	**ft_split(int size, int argc, char **argv)
{
	char	**str;
	int		i[4];

	i[0] = 0;
	i[3] = 0;
	str = (char **)malloc(sizeof(char *) * (size + 1));
	while (++i[0] < argc)
	{
		i[1] = 0;
		i[2] = 0;
		while (argv[i[0]][i[2]])
		{
			if (argv[i[0]][i[2]] != ' ' && (argv[i[0]][i[2] + 1] == ' ' \
						|| argv[i[0]][i[2] + 1] == '\0'))
			{
				str[i[3]++] = ft_str_save(argv[i[0]], i[1], i[2] + 1);
			}
			else if (argv[i[0]][i[2]] == ' ')
				i[1] = i[2] + 1;
			i[2]++;
		}
	}
	str[i[3]] = 0;
	return (str);
}

char	*ft_str_save(char *argv, int i, int j)
{
	char	*str;
	int		exe;

	exe = 0;
	str = malloc(sizeof(char) * j - i + 1);
	while (i + exe < j)
	{
		str[exe] = argv[i + exe];
		exe++;
	}
	str[exe] = '\0';
	return (str);
}

void	allfree(char **str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(str[i]);
		i++;
	}
	free(str);
}
