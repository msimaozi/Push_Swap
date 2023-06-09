/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:24:03 by msimaozi          #+#    #+#             */
/*   Updated: 2023/05/09 11:24:05 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	verify_dup(t_data *data, int argc, char **argv)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 1;
	while (i < argc)
	{
		x = ft_atoi(argv[i]);
		j = i + 1;
		while (j <= argc)
		{
			y = ft_atoi(argv[j]);
			if (x == y)
				error_msg(data);
			j++;
		}
		i++;
	}
}

int	find_min(t_data *data)
{
	int	i;
	int	temp;

	i = 0;
	temp = data->original.a.stack[0];
	while (i < data->original.a.size)
	{
		if (temp > data->original.a.stack[i])
		{
			temp = data->original.a.stack[i];
			i = 0;
		}
		i++;
	}
	return (temp);
}

int	find_max(t_data *data)
{
	int	i;
	int	temp;

	i = 0;
	temp = data->original.a.stack[0];
	while (i < data->original.a.size)
	{
		if (temp < data->original.a.stack[i])
		{
			temp = data->original.a.stack[i];
			i = 0;
		}
		i++;
	}
	return (temp);
}
