/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organize_cp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:22:10 by msimaozi          #+#    #+#             */
/*   Updated: 2023/05/09 11:22:11 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	organize(t_data *data, int argc)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < argc)
	{
	j = i + 1;
		while (j < argc - 1)
		{
			if (data->copy.a.stack[i] > data->copy.a.stack[j])
			{
				temp = data->copy.a.stack[i];
				data->copy.a.stack[i] = data->copy.a.stack[j];
				data->copy.a.stack[j] = temp;
			}
		j++;
		}
	i++;
	}
}

void	get_nums_radix(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < data->original.a.size)
	{
		if (data->original.a.stack[i] == data->copy.a.stack[j])
			data->orded.a.stack[i] = j + 1;
		j = 0;
		while (data->original.a.stack[i] != data->copy.a.stack[j])
			j++;
	i++;
	}
}
