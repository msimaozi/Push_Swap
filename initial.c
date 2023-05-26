/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:21:49 by msimaozi          #+#    #+#             */
/*   Updated: 2023/05/09 11:21:54 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_data *data, int argc)
{
	data->original.a.stack = malloc(sizeof(int) * (argc -1));
	data->original.a.size = 0;
	data->original.b.stack = malloc(sizeof(int) * (argc -1));
	data->original.b.size = 0;
	data->copy.a.stack = malloc(sizeof(int) * (argc -1));
	data->copy.a.size = 0;
	data->copy.b.stack = malloc(sizeof(int) * (argc -1));
	data->copy.b.size = 0;
	data->orded.a.stack = malloc(sizeof(int) * (argc -1));
	data->orded.a.size = 0;
	data->orded.b.stack = malloc(sizeof(int) * (argc -1));
	data->orded.b.size = 0;
}

void	checknum(t_data *data, char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[0] == '-' && str[1] >= '0' && str[1] <= '9')
			x++;
		else if (str[x] >= '0' && str[x] <= '9')
			x++;
		else
			error_msg(data);
	}
}

void	send(t_data *data, int argc, char **argv)
{
	int		i;
	int		j;
	ssize_t	nb;

	i = 0;
	j = 1;
	while (i < argc && argv[j])
	{
		nb = ft_atoi(argv[j]);
		if (nb > INT_MAX)
			error_msg(data);
		else
		{
			data->original.a.stack[i] = nb;
			data->copy.a.stack[i] = nb;
			data->orded.a.stack[i] = nb;
			data->original.a.size++;
			data->copy.a.size++;
			data->orded.a.size++;
			i++;
			j++;
		}
	}
}
