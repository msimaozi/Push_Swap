/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:54:26 by msimaozi          #+#    #+#             */
/*   Updated: 2023/04/23 01:44:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_data *data, int argc)
{
	data->original.a.stack = ft_calloc(argc, sizeof(int));
	data->original.a.size = 0;
	data->original.b.stack = ft_calloc(argc, sizeof(int));
	data->original.b.size = 0;
	data->copy.a.stack = ft_calloc(argc, sizeof(int));
	data->copy.a.size = 0;
	data->copy.b.stack = ft_calloc(argc, sizeof(int));
	data->copy.b.size = 0;
	data->orded.a.stack = ft_calloc(argc, sizeof(int));
	data->orded.a.size = 0;
	data->orded.b.stack = ft_calloc(argc, sizeof(int));
	data->orded.b.size = 0;
}

void	checknum(t_data *data, char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[0] == '-')
			x++;
		else if (str[x] >= '0' && str[x] <= '9')
			x++;
		else
			error_msg(data);
	}
}

void	send(t_data *data, int argc, char **argv)
{
	int	i;
	int	j;
	
	i = 0;
	j = 1;
	while (i < argc && argv[j])
	{
		data->original.a.stack[i] = ft_atoi(argv[j]);
		data->copy.a.stack[i] = ft_atoi(argv[j]);
		data->orded.a.stack[i] = ft_atoi(argv[j]);
		data->original.a.size++;
		data->copy.a.size++;
		data->orded.a.size++;
		i++;
		j++;
	}
}